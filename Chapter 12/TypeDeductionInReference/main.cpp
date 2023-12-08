#include <iostream>
#include <typeinfo>

const int* name(){

    static int n{1};
    return &n;
}

int main()
{
    const auto* const n{name()}; //With pointers we must set const in auto definition
    int a{2};

    n=&a;

    std::cout << typeid(n).name() << '\n';
    std::cout << *n << '\n';
    return 0;
}
