#include <iostream>
#include <typeinfo>

int add(int x, int y) {
    return x + y;
}

auto sub(int x, int y) {
    return x - y;
}

int main()
{
    auto a{3.3}; //auto its like any in typescript
    auto b{add(1,1)};
    constexpr auto c { 1 };

    std::cout << typeid(a).name() << '\n';
    std::cout << typeid(b).name() << '\n';
    std::cout << typeid(c).name() << '\n';
    return 0;
}
