#include <vector>
#include <iostream>

int main() {
    std::vector numbers{1,2,3};
    int size{ static_cast<int>(numbers.size()) }; //The default return of size() is std::size_t this is why we must cast it to int
    return 0;
}