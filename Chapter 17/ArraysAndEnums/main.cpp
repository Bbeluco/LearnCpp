#include <array>
#include <iostream>

enum StudentNames {
    kenny, // 0
    kyle, // 1
    stan, // 2
    butters, // 3
    cartman, // 4
    max_students
};

int main() {

    /*
        The advantage here is that std::array can be constexpr
        and constexpr can be asserted in compile time

        so, you dont need to run your code to know where you missed.
    */
    constexpr std::array testScores { 8, 94, 66, 77 };
    static_assert(testScores.size() == max_students && "Incorrect number of students");
    return 0;
}