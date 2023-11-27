#include <iostream>

namespace fun{
    void fizzbuzz(int value) {
        for(int i{1}; i <= value; ++i){
            bool divisibleByThree{(i % 3 == 0)};
            bool divisibleByFive{(i % 5 == 0)};
            bool divisibleBySeven{(i % 7 == 0)};

            if(divisibleByThree) {
                std::cout << "fizz";
            }
            if(divisibleByFive) {
                std::cout << "buzz";
            }
            if(divisibleBySeven) {
                std::cout << "pop";
            }

            if(!divisibleByThree && !divisibleByFive && !divisibleBySeven){
                std::cout << i;
            }

            std::cout << '\n';
        }
    }
}

int main()
{
    fun::fizzbuzz(150);
    return 0;
}
