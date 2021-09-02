[<p align="center"><img width="230" src="http://realclearsense.com/img/images/github_icon.png"></p>](http://realclearsense.com/)


# 瑞可利 AEC SDK（Windows版）
# [English instruction](README-en.md)
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
本SDK使用Visual Studio运行（建议VS2019），我们提供了静态库和动态库供您直接调用，您也可以使用我们提供的[VS工程样例](https://github.com/realclearsense/Real_AEC_Windows/tree/master/Visual_Studio_Demo_Project)。

属性->C/C++->代码生成->运行库->多线程DLL（/MD）

调用接口：  
extern "C" _declspec(dllexport) void* REAL_AEC_create(int frame_len, int sample_rate);  
extern "C" _declspec(dllexport) void REAL_AEC_delete(void* ptr);  
extern "C" _declspec(dllexport) void REAL_AEC_process(void* ptr, short* mic_buf, short* spk_buf, short* out_buf);  

## 效果展示
更多效果展示[音频文件](https://github.com/realclearsense/Real_AEC_Windows/tree/master/demo_audio_data)   

https://user-images.githubusercontent.com/9622783/131809458-a5cc2fe8-945b-4894-992f-cf0ef9e1cb19.mp4
https://user-images.githubusercontent.com/9622783/131809488-a5374fe4-1e1d-45a8-ac36-2cc29ae58989.mp4
https://user-images.githubusercontent.com/9622783/131809501-8bf9dd50-1023-46f3-a771-42c32bc232d2.mp4

## 联系我们

|QQ群：852557172|微信|
|--------|--------|
|<img width="100" src="http://realclearsense.com/img/images/qq.jpg">|<img width="100" src="http://realclearsense.com/img/images/wechat.jpg">|
email: 2217510@qq.com   
http://realclearsense.com/
