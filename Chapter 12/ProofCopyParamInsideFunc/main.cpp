#include <iostream>

//function makes a COPY, so ptr2 is a pointer to a pointer and the original ptr is not changed
void nullify(int* ptr2) {
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
