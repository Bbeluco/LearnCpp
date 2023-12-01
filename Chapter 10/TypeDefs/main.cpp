#include <iostream>
#include <typeinfo>

int main()
{
    typedef long Speed; //Older way to create alias
    using Distance = double; //Now if compiler find Distance keyword, it will treat as type of double

    Distance distanceInKm{5.6};
    Speed s{3333};

    std::cout << typeid(distanceInKm).name() << " " << distanceInKm << '\n';
    std::cout << typeid(s).name() << " " << s << '\n';
    return 0;
}
