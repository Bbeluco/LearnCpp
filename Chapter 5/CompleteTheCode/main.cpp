#include <iostream>

constexpr std::string_view getQuantityPhrase(int quantity) {
    if(quantity <= 0) {
        return "no";
    } else if(quantity == 1) {
        return "a single";
    } else if(quantity == 2) {
        return "a couple of";
    } else if(quantity == 3) {
        return "a few";
    } else {
        return "many";
    }

}

constexpr std::string_view getApplesPluralized(int quantity) {
    return ((quantity > 1) ? "apples" : "apple");
}

int main()
{
    std::cout << "Mary has " << getQuantityPhrase(0) << " " << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";

    return 0;
}
