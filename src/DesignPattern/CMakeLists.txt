# 添加动态库
add_library(Pattern SHARED
    SingleTon.cpp
)

# 公共头文件路径 (暴露给外部用户)
target_include_directories(Pattern
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>  # 开发时引用 include
        $<INSTALL_INTERFACE:include>                   # 安装后引用 include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}                    # 私有头文件 (内部使用)
)

# 定义 Windows 平台导出宏
if (WIN32)
    target_compile_definitions(Pattern PUBLIC PATTERN_EXPORTS)
endif()

# 安装动态库
install(TARGETS Pattern
    RUNTIME DESTINATION bin          # 动态库 (.dll)
    LIBRARY DESTINATION bin          # 动态库 (.so)
    ARCHIVE DESTINATION lib          # 静态库
)
