#pragma once
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);