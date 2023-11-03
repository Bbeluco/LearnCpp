#include <iostream>

using namespace std;

int main()
{
    int a = 5; //Copy initialization
    int b( 6 ); //Direct initialization
    int c = { 7 }; //List initialization has the advantage that only the exact same type as declared is accepted
    int ca {4}; //Another way to List intialization, this is recommended by the https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Res-list
    int d {} //Value initialization (Default is zero or empty it depends on var type)
    int e {0} //Zero initialization
    return 0;
}
