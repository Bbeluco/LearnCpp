#include <iostream>
#include <vector>

/*
    The below code has a behaviour that is really interesting;
    Note that in line XXXXX we added 3 itens in our array that by default starts with value 0
    Parenthesis initialization and .resize() has that same behaviour

    When we create a code that has resize in capacity and length,
    if we run a push_back the compiler wont know that it must take the first 0 available
    instead, it will reallocate more memory to be used by the vector and allocates the desired value inside push_back after the last zero

    It is very important to know this behavior bc reallocation like this means a lot of usage of memory and this is expensive

    Its fact that the bigger difference between vector and arrays is the capacity to realocate the total length.
*/

template<typename T>
void print_stats_vector(const std::vector<T> vec) {
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << '\n';
    for(const auto& item : vec) {
        std::cout << item << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> stack(3);
    stack.push_back(1);
    print_stats_vector(stack);

    stack.push_back(2);
    print_stats_vector(stack);

    stack.push_back(3);
    print_stats_vector(stack);

    stack.pop_back();
    print_stats_vector(stack);
    return 0;
}