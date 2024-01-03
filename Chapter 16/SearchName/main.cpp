#include <iostream>
#include <vector>
#include <string>

using namespace std::literals;
using ArrayNameType = std::vector<std::string_view>;

std::string ask_for_name() {
    std::string name{};
    std::cout << "Enter a name: ";
    std::cin >> name;
    return name;
}

template<typename T>
bool isArrayInValue(const std::vector<T>& names, std::string_view name) {
    for(const auto& current_name : names) {
        if(current_name == name){
            return true;
        }
    }
    return false;
}

int main() {
    const ArrayNameType names { "Alex"sv, "Betty"sv, "Caroline"sv, "Dave"sv, "Emily"sv, "Fred"sv, "Greg"sv, "Holly"sv};
    std::string_view user_name { ask_for_name() };
    if(isArrayInValue(names, user_name)) {
        std::cout << user_name << " was found.\n";
    } else {
        std::cout << user_name << " was not found.\n";
    };
    return 0;
}