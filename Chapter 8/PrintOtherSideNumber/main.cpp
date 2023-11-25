#include <iostream>

int main()
{
    int outer{5};
    while(outer >= 1) {
        int inner_one{outer - 1};
        while(inner_one > 0){
            std::cout << " ";
            --inner_one;
        }

        int inner_two{5 - (outer - 1)};
        while(inner_two > 0) {
            std::cout << inner_two << ' ';
            --inner_two;
        }
        --outer;
        std::cout << '\n';
    }
    return 0;
}
