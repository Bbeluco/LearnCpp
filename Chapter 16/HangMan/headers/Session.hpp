#ifndef SESSION_H
#define SESSION_H

#include <string>
#include <vector>

#include "Wordlist.hpp"


class Session {
public:
    std::string_view get_word() const { return m_word; }

    void set_user_guesses(char c) { m_user_guesses[toIndex(c)] = true; }
    bool is_letter_guessed(char c) const { return m_user_guesses[toIndex(c)]; }

    void set_user_got_it() { m_got_it = true; }
    bool user_got_it() { return m_got_it; }

    int get_wrong_guesses_left() const { return m_wrong_guesses_left; }
    void decrement_wrong_guesses_left() { m_wrong_guesses_left--; }

    void add_wrong_guess_char(char c) { m_wrong_guesses_chars.push_back(c); }
    const std::vector<char>& get_wrong_guessed_chars() const { return m_wrong_guesses_chars; }

    bool isLetterInWord (char c) const {
        for(const auto& l : m_word) {
            if(c == l) {
                return true;
            }
        }

        return false;
    }

private:
    std::size_t toIndex(char c) const { return static_cast<std::size_t>((c % 32)-1); }

    std::string_view m_word{ WordList::get_random_word() };
    std::vector<bool> m_user_guesses{ std::vector<bool>(26) };
    std::vector<char> m_wrong_guesses_chars{};
    bool m_got_it{};
    int m_wrong_guesses_left{6};
};

#endif