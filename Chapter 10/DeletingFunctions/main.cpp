#include <iostream>

void printInt(int x){
    std::cout << x << '\n';
}

void printInt(char) = delete;
void printInt(bool) = delete;

int main() {
    printInt(1);
    printInt('a');
    printInt(true);
    return 0;
}
