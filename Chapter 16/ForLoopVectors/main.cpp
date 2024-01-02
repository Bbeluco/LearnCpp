#include <iostream>
#include <vector>
#include <limits>

void sanitizeInput() {
    if(std::cin.fail()) {
        std::cin.clear();
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int askValue() {

    int number{};
    while(true) {
        std::cout << "Please, insert a integer value between 1 and 9: ";
        std::cin >> number;

        sanitizeInput();

        if(number > 0 && number < 10) {
            break;
        }
    }

    return number;
}

void printArray(const std::vector<int>& arr) {
    for(std::size_t i{0}; i < arr.size(); ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

template <typename T>
int findInArray(const std::vector<T>& arr, int userInput) {
    for (size_t i = 0; i < arr.size(); i++) {
        if(arr[i] == userInput) {
            return i;
        }
    }
    return -1;
}

void printNumberPosition(int index, int userInput) {
    std::cout << "The number " << userInput << ' ';
    if(index != -1) {
        std::cout << "has index " << index << '\n';
    } else {
        std::cout << "could was not found\n";
    }
}

int main() {
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int userInput { askValue() };
    printArray(arr);
    int index {findInArray(arr, userInput)};
    printNumberPosition(index, userInput);
    return 0;
}