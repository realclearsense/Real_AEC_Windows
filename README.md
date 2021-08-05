<p align="center"><img width="230" src="http://realclearsense.com/img/images/github_icon.png"></p>


# 瑞可利 AEC SDK（Windows版）
English instruction please see below.
## 简介
RealClear AEC SDK是由重庆瑞可利科技有限公司开发的回声消除解决方案。
- 支持48 kHz全频带的回声消除，噪声消除和去混响
- 回声拖尾支持高达500ms
- 支持不同声学结构和路径，比如Speakerphone一体机等
- 快速收敛学习，小于200ms
- 支持抑制强回声高达70dB
- 全双工音质基本无损，无卡顿（信号强度在正常范围内）
## 如何使用
本SDK使用Visual Studio运行（建议VS2019）

属性->C/C++->代码生成->运行库->多线程DLL（/MD）

调用接口：  
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);  
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);  
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);  

## 效果展示
所有展示用数据都可下载：  
[普通环境音频文件](https://github.com/realclearsense/Real_AEC_Windows/tree/master/normal_room_demo_data)   
[混响环境音频文件](https://github.com/realclearsense/Real_AEC_Windows/tree/master/reverberant_room_demo_data)
### 普通环境
测试环境：6-8平米书房，混响较小   
离麦克风1米距离说话，DELL笔记本扬声器和双麦阵列。
#### 单讲测试效果
https://user-images.githubusercontent.com/9622783/128284334-fe78882d-fdc9-4739-87bb-03b987b303f6.mp4



https://user-images.githubusercontent.com/9622783/128284381-d8e79929-3f06-4496-9c51-8c9275dd1ed8.mp4



https://user-images.githubusercontent.com/9622783/128284397-21247cbd-b0ad-4314-9ff7-1c7bc21e4a2a.mp4




#### 双讲测试效果


https://user-images.githubusercontent.com/9622783/128284447-eee60c00-2caa-430f-96f4-825344f9d529.mp4



https://user-images.githubusercontent.com/9622783/128284458-46580686-7e16-4507-b909-c42f1e710986.mp4



https://user-images.githubusercontent.com/9622783/128284462-80eae948-ec43-4884-b82c-a8941472b2c8.mp4


### 混响环境
测试环境：35平米房间，混响较大   
离麦克风1米距离说话，DELL笔记本扬声器和双麦阵列。


https://user-images.githubusercontent.com/9622783/128284481-873a0362-1c84-4021-ac3b-b33978ea06a5.mp4



https://user-images.githubusercontent.com/9622783/128284491-db8cc903-ece6-438a-9113-e2cd513550d0.mp4



https://user-images.githubusercontent.com/9622783/128284503-043ad835-3900-4d15-b175-7f0110c329d0.mp4



## 联系我们
|QQ|微信|
|--------|--------|
|<img width="100" src="http://realclearsense.com/img/images/qq.jpg">|<img width="100" src="http://realclearsense.com/img/images/wechat.jpg">|

http://realclearsense.com/


#       
#    
          
# RealClear AEC SDK for Windows
## Introduction
RealClear AEC SDK is developed by ChongQing RealClear Co.Ltd for acoustic echo cancellation. It has the following features:
- supports full-band (48 kHz) acoustic echo cancellation, noise suppression and dereverberation
- handles echo tails of up to 500ms
- handles various acoustic structures of devices and echo path, for example video sound bar
- fast convergence (< 200ms)
- handles single talk echo suppression of up to 70dB
- full-duplex operation outputs lossless and smooth audio(when far and near signal level in normal range)
## How to use
This SDK can be only used in Visual Studio (recommend VS2019)

properties->C/C++->Code Generation->Runtime Library->Multi-threaded DLL（/MD）

API：  
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);  
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);  
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);  

## Demo
Demo audio files download：  
[Normal environment test audio files](https://github.com/realclearsense/Real_AEC_Windows/tree/master/normal_room_demo_data)   
[Reverberant environment test audio files](https://github.com/realclearsense/Real_AEC_Windows/tree/master/reverberant_room_demo_data)   
### Normal environment
Testing environment: 6-8 square metre study room, almost no reverberation.
#### Single Talk
https://user-images.githubusercontent.com/9622783/128284334-fe78882d-fdc9-4739-87bb-03b987b303f6.mp4



https://user-images.githubusercontent.com/9622783/128284381-d8e79929-3f06-4496-9c51-8c9275dd1ed8.mp4



https://user-images.githubusercontent.com/9622783/128284397-21247cbd-b0ad-4314-9ff7-1c7bc21e4a2a.mp4


#### Double Talk
https://user-images.githubusercontent.com/9622783/128284447-eee60c00-2caa-430f-96f4-825344f9d529.mp4



https://user-images.githubusercontent.com/9622783/128284458-46580686-7e16-4507-b909-c42f1e710986.mp4



https://user-images.githubusercontent.com/9622783/128284462-80eae948-ec43-4884-b82c-a8941472b2c8.mp4
### Reverberant room
Testing environment: 35 square metre office room, strong reverberation.

https://user-images.githubusercontent.com/9622783/128284481-873a0362-1c84-4021-ac3b-b33978ea06a5.mp4



https://user-images.githubusercontent.com/9622783/128284491-db8cc903-ece6-438a-9113-e2cd513550d0.mp4



https://user-images.githubusercontent.com/9622783/128284503-043ad835-3900-4d15-b175-7f0110c329d0.mp4




## Contact
email: 2217510@qq.com

http://realclearsense.com/
