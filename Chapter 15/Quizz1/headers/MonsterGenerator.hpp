#ifndef MONTER_GENERATOR_H
#define MONTER_GENERATOR_H

#include "Monster.hpp"
#include "Random.hpp"

namespace MonsterGenerator {
    std::string_view getName(int num) {
        switch (num) {
            case 0:  return "Blarg";
            case 1:  return "Moog";
            case 2:  return "Pksh";
            case 3:  return "Tyrn";
            case 4:  return "Mort";
            case 5:  return "Hans";
            
            default: return "???";
        }
    }

    std::string_view getRoar(int num) {
        switch (num) {
            case 0:  return "*ROAR*";
            case 1:  return "*peep*";
            case 2:  return "*squeal*";
            case 3:  return "*whine*";
            case 4:  return "*growl*";
            case 5:  return "*burp*";
            
            default: return "???";
        }
    }

    Monster generate() {
        int random_option_name { Random::get(0,5) };
        std::string name {getName(random_option_name)};
        std::string roar{getRoar(random_option_name)};
        int hit_points{ Random::get(0, 100) };
        Monster::Type t{ static_cast<Monster::Type>(Random::get(0, (Monster::max_monster_types - 1)))};
        
        return Monster{ t, name, roar, hit_points};
    }
}

#endif