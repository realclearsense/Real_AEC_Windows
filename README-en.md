[<p align="center"><img width="230" src="http://realclearsense.com/img/images/github_icon.png"></p>](http://realclearsense.com/)

      
# RealClear AEC SDK for Windows
## [中文说明](README.md)
## Introduction
RealClear AEC SDK is developed by ChongQing RealClear Co.Ltd for acoustic echo cancellation. Our goal is to offer inudtry-leading solutions that is as good as the solutions from top componies like [Poly](https://www.poly.com) or [ADT](https://www.adaptivedigital.com/). 
- supports full-band (48 kHz) acoustic echo cancellation for better speech quality.
- supports nonstationary noise suppression with very low computational cost, supports dereverberation.
- supports user-adjustable echo tails of up to 500ms.
- handles various acoustic structures of devices and echo path, for example video sound bar, smart glass or earphones.
- fast convergence (< 200ms) at the speed of up to 100 dB / sec.
- handles single talk echo suppression of up to 80dB under various acoustics environment.
- full-duplex operation outputs lossless and smooth audio (when far and near signal level in normal range), provides more than 40 dB echo suppression during double talk.
- supports all platforms (ARM\RISC-V\MIPS\DSP\X86) with platform-specific float-point or fixed-point algorithms.
- supports far-field sound pickup and beamforming using audio devices with multiple micphones, supports extensible module like afc (adaptive feedback cancellation).
- our solutions have been widely used in applications like video conferencing, cell phones and other consumer electronics.
## How to use
This SDK can be only used in Visual Studio (recommend VS2019), we provide static/dynamic libraries for your own applications. You can also use the [Visual Studio Demo Project](https://github.com/realclearsense/Real_AEC_Windows/tree/master/Visual_Studio_Demo_Project).   

properties->C/C++->Code Generation->Runtime Library->Multi-threaded DLL（/MD）

API：  
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);  
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);  
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);  

## Demo
More demo audio files can be found [here](https://github.com/realclearsense/Real_AEC_Windows/tree/master/demo_audio_data). 
https://user-images.githubusercontent.com/9622783/131809458-a5cc2fe8-945b-4894-992f-cf0ef9e1cb19.mp4
https://user-images.githubusercontent.com/9622783/131809488-a5374fe4-1e1d-45a8-ac36-2cc29ae58989.mp4
https://user-images.githubusercontent.com/9622783/131809501-8bf9dd50-1023-46f3-a771-42c32bc232d2.mp4

## Contact
email: 2217510@qq.com

http://realclearsense.com/
