#include <iostream>

int main()
{
    int x{0};

    {
        int x{1};
        std::cout << x << '\n';
    }

    std::cout << x << '\n';
    /*
    Linkage is the prop that defines WHO I'm talking about;
    Local variables has no linkage,
        which means I can reuse its identifier whatever block i want
    */
    return 0;
}
