#include <iostream>

int main()
{
    unsigned short a{0}; //This will be 1-byte long, but it do not have sign so we store only positive numbers
    //0-255

    unsigned short b{0};

    std::cout << b << '\n';

    b = -1;

    std::cout << b << '\n';

    unsigned int u{ 2 };
	signed int s{ 3 };

	std::cout << u - s << '\n';


	unsigned zero{0};
	unsigned exemplo{1};

	std::cout << exemplo - zero << '\n';
    return 0;
}
