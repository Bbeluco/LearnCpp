#include <iostream>
#include <string>

int get_user_input_value(std::string_view greatness)  //greatness starts
    std::cout << "Enter a " << greatness << " number: ";
    int x{};
    std::cin >> x;

    return x;
} //greatness ends

int main()
{
    int smaller{get_user_input_value("small")}; // smaller starts
    int larger{get_user_input_value("large")}; // larger starts

    if(larger < smaller) {
        std::cout << "Swapping the values\n";
        int aux{larger};
        larger = smaller;
        smaller = aux;
    }

    std::cout << "SMALL: " << smaller << '\n';
    std::cout << "LARGER: " << larger << '\n';
    return 0;
}
