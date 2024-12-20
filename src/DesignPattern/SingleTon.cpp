#include "DesignPattern/SingleTon.h"

// 静态成员变量初始化
Singleton* Singleton::m_instance = nullptr;
std::mutex Singleton::m_mutex;

// 私有构造函数实现
Singleton::Singleton() {}

// 获取单例实例实现
Singleton* Singleton::getInstance() {
    if (!m_instance) {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (!m_instance) {
            m_instance = new Singleton();
        }
    }
    return m_instance;
}

// 公共方法实现
void Singleton::doSomething() {
    std::cout << "test call method." << std::endl;
}
