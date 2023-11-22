#include <iostream>

static int g_x{0};
//static: tells the compiler to change the var name at comp
//It can be use with global vars to not break the ODR

static void name() {}

int main()
{
    return 0;
}
