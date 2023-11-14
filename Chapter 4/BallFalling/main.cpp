#include <iostream>

double inputHeightTower() {
    std::cout << "Enter the height of the tower in meters: ";
    double h{};
    std::cin >> h;

    return h;
}

double heightOfBall(double currentHeight, int currentSecond) {
    double gravity_constant = 9.8;
    return currentHeight - ((gravity_constant * (currentSecond*currentSecond)) / 2);
}

void printHeight(double height, int second) {
    double currentBallHeight{heightOfBall(height, second)};
    if(currentBallHeight > 0) {
        std::cout << "At " << second << " seconds, the ball is at height: " << currentBallHeight << " meters\n";
    } else {
        std::cout << "At " << second << " seconds, the ball is on the ground.\n";
    }
}

int main()
{
    double heightTower{ inputHeightTower() };

    printHeight(heightTower, 0);
    printHeight(heightTower, 1);
    printHeight(heightTower, 2);
    printHeight(heightTower, 3);
    printHeight(heightTower, 4);
    printHeight(heightTower, 5);
    return 0;
}
