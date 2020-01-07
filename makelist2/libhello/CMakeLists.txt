set(LIB_SRC hello.c)
add_library(libhello ${LIB_SRC})  //生成库文件 
set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello") //库文件输出重命名
