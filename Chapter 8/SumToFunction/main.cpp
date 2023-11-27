#include <iostream>

namespace fun{
    int sumTo(int value){
        int total{0};
        for(int i{0}; i <= value; ++i) {
            total+=i;
        }

        return total;
    }
}

int main()
{
    std::cout << fun::sumTo(5) << '\n';
    return 0;
}
