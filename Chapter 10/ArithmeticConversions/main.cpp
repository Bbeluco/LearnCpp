#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    short a {3};
    short b {3};
    std::cout << typeid(a + b).name() << '\n';

    //This prints false because when we have unsigned in our expression, everything is converted to unsigned, dont matter its content
    std::cout << std::boolalpha << (-3 < 5u) << '\n';

    return 0;
}
