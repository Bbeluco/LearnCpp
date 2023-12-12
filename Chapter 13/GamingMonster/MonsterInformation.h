#ifndef MONSTERINFORMATION_H_INCLUDED
#define MONSTERINFORMATION_H_INCLUDED

#include "TypeMonsters.h"
#include <string>

struct Monster{
    Type_monster monster{};
    std::string_view name{};
    int health{};
};

std::string_view get_monster_type_string(const Type_monster& t_monster) {
    switch(t_monster){
    case Type_monster::ogre:
        return "ogre";
    case Type_monster::slime:
        return "slime";
    case Type_monster::dragon:
        return "dragon";
    case Type_monster::giant_spider:
        return "giant spider";
    case Type_monster::orc:
        return "orc";
    default:
        return "Unknown";
    }
}


#endif // MONSTERINFORMATION_H_INCLUDED
