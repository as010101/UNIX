include_directories(${PROJECT_SOURCE_DIR}/libhello)
set(APP_SRC main.c)
add_executable(hello ${APP_SRC})  //告诉工程生成一个可执行文件
target_link_libraries(hello libhello)//hello 链接库文件 libhello


