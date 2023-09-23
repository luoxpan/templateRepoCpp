# CPP CMake模板
## 初始模板来源
[Github Repo](https://github.com/Codesire-Deng/TemplateRepoCxx)

## 修改后的模板说明
src 中的.cpp文件可以引入include文件夹中的.h文件，且src中的所有src会共同编译生成一个main.exe文件。

test 中的.cpp文件不要引入include中的.h文件，且test中的每一个.cpp会单独编译生成各自的exe可执行文件

## 使用说明

`git clone https://github.com/luoxpan/templateRepeCpp.git`
VSCODE 中Ctrl+Shift+P , 输入CMake,选择CMake:配置，选择配置即可,请确保已安装mingw编译包，并将其目录下的bin文件夹加入环境变量PATH中





