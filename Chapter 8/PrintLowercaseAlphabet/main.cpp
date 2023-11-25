#include <iostream>


int main()
{
    int l{'a'};
    while(l <= 'z'){
        std::cout << static_cast<char>(l) << '\n';
        ++l;
    }
    return 0;
}
