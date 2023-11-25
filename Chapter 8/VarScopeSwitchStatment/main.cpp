#include <iostream>

int main()
{
    int x{3};

    switch(x) {
    case 1:
        {
            int a{3}; //This is how you instantiate a variable inside switch
            std::cout << "One\n";
            break;
        }
    case 2:
        std::cout << "Two\n";
        break;
    }
    return 0;
}
