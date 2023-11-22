#include <iostream>

namespace foo {
    namespace goo {
        void printHello() {
            std::cout << "Hello\n";
        }
    }
}

int main()
{
    namespace test = foo::goo; //Namespace aliases
    test::printHello();
    return 0;
}
