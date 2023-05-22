#include <iostream>
#include "add.h"
#include "multiple.h"
int main()
{
    std::cout << "hello github" << std::endl;
    int c = add(1,2);
    int d = multiple(3,4);
    std::cout << "add:" << c << "multiple:" << d << std::endl;
}