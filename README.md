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
[aecout](https://github.com/realclearsense/Real_AEC_Windows/blob/master/reverberant_room_demo_data/aecout.mp3)

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

## Contact
email: 2217510@qq.com

http://realclearsense.com/
