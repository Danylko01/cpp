#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <mutex>
using namespace std;

#ifdef _WIN32
    #ifdef PATTERN_EXPORTS
        #define PATTERN_API __declspec(dllexport)
    #else
        #define PATTERN_API __declspec(dllimport)
    #endif
#else
    #define PATTERN_API
#endif


class PATTERN_API Singleton {
private:
    // 私有构造函数防止外部直接实例化
    Singleton();
    static Singleton* m_instance;
    static std::mutex m_mutex;

public:
    // 获取单例实例
    static Singleton* getInstance();

    // 测试方法
    void doSomething();
};

#endif // SINGLETON_H
