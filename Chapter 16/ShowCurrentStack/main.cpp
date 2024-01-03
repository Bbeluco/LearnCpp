#include <iostream>
#include <vector>
#include <string>

void print_stats(std::vector<int>& stack);

void pop_and_print(std::vector<int>& stack) {
    stack.pop_back();
    std::cout << "POP\t";
    print_stats(stack);
}

void push_and_print(std::vector<int>& stack, int push_number) {
    stack.push_back(push_number);
    std::cout << "PUSH " << push_number << '\t';
    print_stats(stack);
}

void print_stats(std::vector<int>& stack) {
    if(stack.size() == 0) {
        std::cout << "\t(Stack: empty)\n";
        return;
    }

    std::cout << "(Stack: ";
    for(const auto& item : stack) {
        std::cout << ' ' << item;
    }
    std::cout << ")\n";
}

int main() {
    std::vector<int> stack{};
    print_stats(stack);
    push_and_print(stack, 1);
    push_and_print(stack, 2);
    push_and_print(stack, 3);
    pop_and_print(stack);
    push_and_print(stack, 4);
    pop_and_print(stack);
    pop_and_print(stack);
    pop_and_print(stack);
    return 0;
}