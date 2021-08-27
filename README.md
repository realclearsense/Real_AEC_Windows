<p align="center"><img width="230" src="http://realclearsense.com/img/images/github_icon.png"></p>


# 瑞可利 AEC SDK（Windows版）
English instruction please see below.
## 简介
RealClear AEC SDK是由重庆瑞可利科技有限公司开发的回声消除解决方案。我们的目标是提供和[Poly](https://www.poly.com/cn/zh)或[ADT](https://www.adaptivedigital.com/)一样完美的音频解决方案。
- 支持48 kHz全频带的回声消除，设计目标为了听感服务。
- 集成下一代降噪，支持超低算力下的非稳态噪声和混响抑制。
- 回声拖尾支持高达500ms，回声尾长可由用户调节。
- 支持不同形态的硬件声学结构和路径，比如高端视频会议一体机、智能眼镜、耳机。
- 快速收敛学习，收敛速度高达每秒 100 dB。
- 在任何声学环境中提供卓越且一致的单次通话回声降低 80 dB。
- 双向通话时发散度低，全双工音质基本无损，在双方通话期间提供 40 dB 或更多的稳定回声降低。
- 支持全硬件平台ARM\RISC-V\MIPS\DSP\X86。
- 针对多平台（ARM\RISC-V\DSP）优化的浮点和定点算法，实现可直接使用。
- 支持多个扬声器和多个麦克风，支持远场拾音Beamform阵列，支持更多独立扩展模块如啸叫抑制。
- 高端应用中证明了卓越的性能，包括视频会议、免提电话和消费电子产品。
## 如何使用
本SDK使用Visual Studio运行（建议VS2019），我们提供了静态库和动态库供您直接调用。

属性->C/C++->代码生成->运行库->多线程DLL（/MD）

调用接口：  
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);  
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);  
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);  

## 效果展示
所有展示用数据都可下载： [音频文件](https://github.com/realclearsense/Real_AEC_Windows/tree/master/normal_room_demo_data)   


测试环境：6-8平米书房，混响较小   
离麦克风1米距离说话，DELL笔记本扬声器和双麦阵列。
### 单讲测试效果
https://user-images.githubusercontent.com/9622783/128284334-fe78882d-fdc9-4739-87bb-03b987b303f6.mp4



https://user-images.githubusercontent.com/9622783/128284381-d8e79929-3f06-4496-9c51-8c9275dd1ed8.mp4



https://user-images.githubusercontent.com/9622783/128284397-21247cbd-b0ad-4314-9ff7-1c7bc21e4a2a.mp4




### 双讲测试效果


https://user-images.githubusercontent.com/9622783/128284447-eee60c00-2caa-430f-96f4-825344f9d529.mp4



https://user-images.githubusercontent.com/9622783/128284458-46580686-7e16-4507-b909-c42f1e710986.mp4



https://user-images.githubusercontent.com/9622783/128284462-80eae948-ec43-4884-b82c-a8941472b2c8.mp4


## 联系我们

|QQ|微信|
|--------|--------|
|<img width="100" src="http://realclearsense.com/img/images/qq.jpg">|<img width="100" src="http://realclearsense.com/img/images/wechat.jpg">|
email: 2217510@qq.com   
http://realclearsense.com/


#       
#    
          
# RealClear AEC SDK for Windows
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
This SDK can be only used in Visual Studio (recommend VS2019), we provide static/dynamic libraries for your own applications.

properties->C/C++->Code Generation->Runtime Library->Multi-threaded DLL（/MD）

API：  
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);  
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);  
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);  

## Demo
Demo audio files download：[demo audio files](https://github.com/realclearsense/Real_AEC_Windows/tree/master/normal_room_demo_data)   
 
Testing environment: 6-8 square metre study room, mild reverberation.
### Single Talk
https://user-images.githubusercontent.com/9622783/128284334-fe78882d-fdc9-4739-87bb-03b987b303f6.mp4



https://user-images.githubusercontent.com/9622783/128284381-d8e79929-3f06-4496-9c51-8c9275dd1ed8.mp4



https://user-images.githubusercontent.com/9622783/128284397-21247cbd-b0ad-4314-9ff7-1c7bc21e4a2a.mp4


### Double Talk
https://user-images.githubusercontent.com/9622783/128284447-eee60c00-2caa-430f-96f4-825344f9d529.mp4



https://user-images.githubusercontent.com/9622783/128284458-46580686-7e16-4507-b909-c42f1e710986.mp4



https://user-images.githubusercontent.com/9622783/128284462-80eae948-ec43-4884-b82c-a8941472b2c8.mp4





## Contact
email: 2217510@qq.com

http://realclearsense.com/
