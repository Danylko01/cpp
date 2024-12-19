/*
 * @Description: 
 * @Author: Danylko
 * @Date: 2024-12-18 08:03:43
 * @LastEditTime: 2024-12-18 08:04:31
 */
#include "MyLibrary/MyLibrary.h"
#include "MyLibrary/Utility.h"

int main() {
    myLibraryFunction();   // 调用动态库主函数
    utilityFunction();     // 调用动态库公共工具函数
    return 0;
}
