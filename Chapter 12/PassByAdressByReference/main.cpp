#include <iostream>

//Basically, this weird code (int*&) gets an reference from a integer pointer, reference means an ALIAS this is why we can change external ptr
void nullify(int*& ptr2) {
    ptr2 = nullptr;
}

int main()
{
    int x{3};
    int* ptr{&x};

    std::cout << "ptr is " << (ptr ? "non-null" : "null") << '\n';

    nullify(ptr);

    std::cout << "ptr is " << (ptr ? "non-null" : "null") << '\n';
    return 0;
}
