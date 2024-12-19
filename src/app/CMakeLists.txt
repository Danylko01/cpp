# 添加可执行程序
add_executable(app main.cpp)

# 链接动态库
target_link_libraries(app PRIVATE MyLibrary)

# 添加头文件路径
target_include_directories(app PRIVATE ${CMAKE_SOURCE_DIR}/include)

# 安装可执行程序
install(TARGETS app RUNTIME DESTINATION bin)
