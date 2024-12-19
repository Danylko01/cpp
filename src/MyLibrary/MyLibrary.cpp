#include "MyLibrary/MyLibrary.h"
#include "PrivateHelper.h"
#include <iostream>

void myLibraryFunction() {
    std::cout << "Hello from MyLibrary!" << std::endl;
    privateHelperFunction();
}
