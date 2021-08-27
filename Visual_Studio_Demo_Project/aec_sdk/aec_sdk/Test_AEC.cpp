/*================================================================
Copyright (C) 2019-2021 ChongQing RealClear Technology Co.,Ltd.
All rights reserved
==================================================================*/

#include <windows.h>
#include <stdio.h>
#include "realaec_sdk.h"

#define SAMPLING_RATE 48000
#define FRAME_SIZE 960


int main() {
	int SampleCount = 0;
	int TickStart = 0;
	int TickEnd = 0;
	int ret1 = 0, ret2 = 0;
	FILE* farFile = NULL;
	FILE* nearFile = NULL;
	FILE* outFile = NULL;

	farFile = fopen("far.pcm", "rb");
	nearFile = fopen("near.pcm", "rb");
	outFile = fopen("aecout.pcm", "wb");

	short* FarDataIn = (short*)calloc(FRAME_SIZE, sizeof(short));
	short* NearDataIn = (short*)calloc(FRAME_SIZE, sizeof(short));
	short* ArrayDataOut = (short*)calloc(FRAME_SIZE, sizeof(short));

	if (!FarDataIn || !NearDataIn || !ArrayDataOut) {
		printf("memory allocation failed!\n");
		return -1;
	}

	// initiation
	void* p_aec = REAL_AEC_create(FRAME_SIZE, SAMPLING_RATE);


	TickStart = GetTickCount64();
	while (1) {
		ret1 = fread(FarDataIn, sizeof(short), FRAME_SIZE, farFile);
		ret2 = fread(NearDataIn, sizeof(short), FRAME_SIZE, nearFile);
		if (ret1 != FRAME_SIZE)
			break;

		REAL_AEC_process(p_aec, NearDataIn, FarDataIn, ArrayDataOut);

		fwrite(ArrayDataOut, sizeof(short), FRAME_SIZE, outFile);

		printf("\rCur Sample = %7d", SampleCount);

		SampleCount += FRAME_SIZE;
	}
	TickEnd = GetTickCount64();
	TickEnd -= TickStart;
	if (TickEnd == 0)
		TickEnd = 1;

	int factor = SAMPLING_RATE / 1000;
	printf("\n Total has %d samples(%d ms), Elapse %d ms,  %f Samples/ms\n", SampleCount, SampleCount / factor,
		TickEnd, (double)SampleCount / TickEnd);
	printf(" Cpu Load: %.2f%%\n", (double)100.0 * TickEnd / (SampleCount / factor));

	fclose(farFile);
	fclose(nearFile);
	fclose(outFile);
	free(FarDataIn);
	free(NearDataIn);
	free(ArrayDataOut);
	REAL_AEC_delete(p_aec);

	return 0;
}