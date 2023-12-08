#include <iostream>

/*
The variable must be static bc it ensures that this object will
not die in the end of the function

If the object not die, it is correct to affirm that we have a
piece of memory holding our information

if we have this piece of information available, we can easily
    access it

*/
std::string& name() {
    static std::string n{"Bruno"};

    return n;
}

int main() {
    std::cout << name() << '\n';
    return 0;
}
