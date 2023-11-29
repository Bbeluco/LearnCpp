#include <iostream>
#include <cassert>
#include <cmath> // for std::sqrt

static_assert(sizeof(long) == 8, "long must be 8 bytes"); //assertion in compile-time

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity){
    assert(gravity > 0.0 && "Gravity must be positive");

    if (initialHeight <= 0.0) {
        // The object is already on the ground. Or buried.
        return 0.0;
    }

    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main()
{
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8) << " second(s)\n";
    return 0;
}
