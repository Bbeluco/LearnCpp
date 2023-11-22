#include <iostream>

int g_x{};
constexpr int g_y{};

void change_g_x_value(int new_value) {
    g_x = new_value;
}

void print_g_x() {
    std::cout << "g_x: " << g_x << '\n';
}

int main()
{
    print_g_x();
    change_g_x_value(3);
    print_g_x();
    g_x = 4;
    print_g_x();

    std::cout << g_y << '\n';
    return 0;
}
