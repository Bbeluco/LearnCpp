#include <array>
#include <iostream>

struct House {
    int number{};
    int stories{};
    int roomsPerStory{};
};


int main(){
    std::array<House, 3> h{};
    h[0] = {2,3,4};
    h[1] = {10,20,30};
    h[2] = {5,3,0};

    for(House house : h) {
        std::cout << "House number: " << house.number << '\n';
        std::cout << "House stories: " << house.stories << '\n';
        std::cout << "House rooms: " << house.roomsPerStory << '\n';
        std::cout << '\n';
    }

    constexpr std::array houses{ //Using CTAD to deduce types and length 
        House{1,2,3}, 
        House{4,5,6}, 
        House{7,8,9}
    };
    return 0;
}