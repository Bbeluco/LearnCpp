#include <iostream>
#include <limits>
#include "Random.h"

namespace error_handler {
    static void ignore_buffer_remains() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    static bool reset_input_buffer() {
        if(std::cin.fail()) {
            std::cin.clear();
            ignore_buffer_remains();
            return false;
        }

        ignore_buffer_remains();
        return true;
    }

    bool is_user_input_valid_number(int guess_number) {
        bool is_range_invalid{(guess_number < 0 || guess_number > 100)};
        if(std::cin.fail() || is_range_invalid){
            std::cout << "Only numbers between 0 and 100 are accepted\n";
        }

        return reset_input_buffer() && !is_range_invalid;
    }

    bool is_user_input_invalid_continue_answer(char answer) {
        return reset_input_buffer() && (answer == 'y' || answer == 'n');
    }
}

namespace calc {
    void calculate_hi_lo(int guess, int random_number) {
        if(guess > random_number){
            std::cout << "Your guess is too high.\n";
        } else {
            std::cout << "Your guess is too low.\n";
        }
    }
}

namespace user_io {
    static int ask_user_for_a_guess(int current_attempt) {
        int guess{};
        do {
            std::cout << "Guess #" << current_attempt << ": ";
            std::cin >> guess;

        }while(!error_handler::is_user_input_valid_number(guess));

        return guess;
    }

    void validate_guess(int random_number) {
        std::cout << random_number << '\n';
        for(int i{1}; i <= 7; ++i) {
            int guess{ask_user_for_a_guess(i)};

            if(guess == random_number) {
                std::cout << "Correct! You win!\n";
                return;
            }

            calc::calculate_hi_lo(guess, random_number);
        }

        std::cout << "Sorry, you lose. The correct number was " << random_number << '\n';
    }

    bool play_again() {
        char answer{};
        do {
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> answer;
        } while(!error_handler::is_user_input_invalid_continue_answer(answer));

        return answer == 'y';
    }
}

int main()
{
    while(true){
        int random_number{Random::get(1, 100)};

        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

        user_io::validate_guess(random_number);

        if(!user_io::play_again()){
            break;
        }
    }

    std::cout << "Thanks for playing\n";
    return 0;
}
