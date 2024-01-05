#include "headers/Session.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std::literals;
using Words = std::vector<std::string_view>;

void welcome_message() {
    std::cout << "Welcome to C++man (a variant of Hangman)\n";
    std::cout << "To win: guess the word.  To lose: run out of pluses.\n\n";
}

void print_left_underscores(const Session& s) {
    std::cout << "The word: ";

    for(const auto& letter : s.get_word()) {
        if(s.is_letter_guessed(letter)){
            std::cout << letter;
        } else {
            std::cout << '_';
        }
    }

    std::cout << '\n';
}

void print_wrong_guesses_left(const Session& s) {
    std::cout << "Wrong guesses left: ";

    for(std::size_t i{0}; i < s.get_wrong_guesses_left(); i++) {
        std::cout << '+';
    }

    for(const auto& c : s.get_wrong_guessed_chars()) {
        std::cout << c;
    }

    std::cout << '\n';
}

char get_user_guess(const Session& s) {
    char letter{};
    while(true){
        std::cout << "Enter your next letter: ";
        std::cin >> letter;

        if(!std::cin){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(letter < 'a' && letter > 'z'){
            std::cout << "That wasn't a valid input.  Try again.\n";
            continue;
        }

        if(s.is_letter_guessed(letter)) {
            std::cout << "You already guessed that.  Try again.\n";
            continue;
        }

        break;
    }

    return letter;
}

void handle_guess(Session& s, char c) {
    if(s.isLetterInWord(c)){
        return;
    }

    s.decrement_wrong_guesses_left();
    s.add_wrong_guess_char(c);
}

bool user_won(const Session& s) {
    bool won{true};
    for(const auto& l : s.get_word()) {
        if(!s.is_letter_guessed(l)) {
            won = false;
        }
    }

    return won;
}

int main() {
    Session user_info{};

    welcome_message();

    int count{0};

    while(user_info.get_wrong_guesses_left() > 0) {
        print_left_underscores(user_info);
        char letter{ get_user_guess(user_info) };
        user_info.set_user_guesses(letter);
        handle_guess(user_info, letter);
        print_wrong_guesses_left(user_info);

        if(user_won(user_info)) {
            user_info.set_user_got_it();
            break;
        }

        std::cout << '\n';
    }

    if(user_info.user_got_it()) {
        std::cout << "CONGRATS YOU WINN! :D\n";
    } else {
        std::cout << "The correct word was: " << user_info.get_word() << '\n';
        std::cout << "Good luck next time :(\n";
    }

    std::cout << "Thank you for playing Hangman!\n";

    return 0;
}