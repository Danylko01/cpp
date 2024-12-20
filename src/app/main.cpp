#include "MyLibrary/MyLibrary.h"
#include "MyLibrary/Utility.h"
#include "DesignPattern/SingleTon.h"

int main() {
    myLibraryFunction();   // 调用动态库主函数
    utilityFunction();     // 调用动态库公共工具函数
    Singleton* instance1 = Singleton::getInstance();
    Singleton* instance2 = Singleton::getInstance();

    if (instance1 == instance2) {
        std::cout << "Two instances are the same." << std::endl;
    } else {
        std::cout << "Two instances are different." << std::endl;
    }

    instance1->doSomething();
    return 0;
}
