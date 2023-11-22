#include <iostream>

extern int g_x{};

extern void sayHi() { //Every var is external by default
    std::cout << "Hi\n";
}
