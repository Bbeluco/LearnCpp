#include <iostream>

template<typename T, typename U>
struct Pair {
    T first{};
    U second{};
    int nonTemplate{6};
};

template<typename T, typename U>
constexpr auto max(Pair<T, U> p){
    return (p.first > p.second) ? p.first : p.second;
}

int main() {
    Pair<double, double> pDouble{1.1, 5.4};
    Pair<int, int> pInt{2,1};

    std::cout << "Max INTEGER: " << max<int, int>(pInt) << '\n';
    std::cout << "Max DOUBLE: " << max<double, double>(pDouble) << '\n';

    std::cout << "NON TEMPLATE: " << pInt.nonTemplate << '\n';
    return 0;
}
