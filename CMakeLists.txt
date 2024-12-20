cmake_minimum_required(VERSION 3.22)
project(CMakeProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # 可执行程序和动态库
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # 动态库
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)  # 静态库
# 自定义安装路径
if(WIN32)
    # 默认安装到项目根目录的 install 子目录（避免管理员权限问题）
    set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/install" CACHE PATH "Installation Directory" FORCE)
else()
    # 非 Windows 系统默认安装到 /usr/local
    set(CMAKE_INSTALL_PREFIX "/usr/local" CACHE PATH "Installation Directory")
endif()
# 添加子模块
add_subdirectory(src/MyLibrary)
add_subdirectory(src/DesignPattern)
add_subdirectory(src/app)


# 安装公共头文件
install(DIRECTORY include/MyLibrary DESTINATION include)
install(DIRECTORY include/DesignPattern DESTINATION include)
