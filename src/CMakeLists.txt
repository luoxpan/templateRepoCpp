# src 中的所有.cpp文件共同编译链接成一个main可执行文件
include_directories(../include)

aux_source_directory(../src/ DIR_SRC)

add_executable(main ${DIR_SRC})


