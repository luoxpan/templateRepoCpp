# 每一个.cpp文件单独编译成一个可执行文件

file(GLOB_RECURSE all_srcs CONFIGURE_DEPENDS *.cpp)
foreach(v ${all_srcs})
	get_filename_component(target_name ${v} NAME_WE)
	add_executable(${target_name} ${v})
endforeach()
