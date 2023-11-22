#include "Foo.h"
#include "Goo.h"
#include <iostream>

int main()
{
    std::cout << foo::doSomething(1,2) << '\n';
    std::cout << goo::doSomething(1,2) << '\n';
    return 0;
}
