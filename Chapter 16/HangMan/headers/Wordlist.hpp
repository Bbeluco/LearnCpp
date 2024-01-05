#ifndef WORD_LIST_H
#define WORD_LIST_H

#include <string>
#include <vector>
#include "Random.hpp"
using Words = std::vector<std::string_view>;
namespace WordList {
    Words words {"mystery", "broccoli" , "account", "almost", "spaghetti", "opinion", "beautiful", "distance", "luggage"};

    std::string_view get_random_word() {
        return words[Random::get(0, words.size() - 1)];
    }
}

#endif