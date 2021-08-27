
## 使用说明
![vs-project-instruction-cn](https://user-images.githubusercontent.com/9622783/131084526-8193ed45-5a55-4d91-80b1-273794dd654a.png)

如上图所示
- 输入文件：替换您想测试的远端和近端文件（格式必须为pcm)，默认采样率是48000，如果您的文件采样率不同，请在Test_AEC.cpp中调整。
- 调用的库：分为32位（x86)和64位（x64)两种，每种又分为debug和release，注意使用时请保持一致。




## Instruction
![vs-project-instruction-en](https://user-images.githubusercontent.com/9622783/131084540-49e99ceb-7074-42ee-b8c5-daa750f73d8f.png)

As shown in picture above,

- Input files: you can replace the files with files of your interest, make sure the file format is PCM. The sampling rate in default is 48000. If your files have a different sampling rate, you need to change it in Test_AEC.cpp.
- Static/dynamic lib: make sure you use the same configuration (x86 or x64, debug or release) as your selection of the libraries when you run your visual studio project.
