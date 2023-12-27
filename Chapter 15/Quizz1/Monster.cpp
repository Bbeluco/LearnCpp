#include "headers/Monster.hpp"
#include <iostream>

Monster::Monster(const Type& type, std::string name, std::string roar, int hit_points)
: m_type{type}
, m_name{name}
, m_roar{roar}
, m_hit_points{hit_points}
{}

std::string_view Monster::get_type_string() const {
    switch (m_type) {
    case Monster::dragon: return "dragon";
    case Monster::goblin: return "goblin";
    case Monster::ogre: return "ogre";
    case Monster::orc: return "orc";
    case Monster::skeleton: return "skeleton";
    case Monster::troll: return "troll";
    case Monster::vampire: return "vampire";
    case Monster::zombie: return "zombie";
    default: return "???";
    }
}

void Monster::print() const {
    std::cout << m_name << " the " << get_type_string() << " has " << m_hit_points 
        << " hit points and says " << m_roar << '\n';
}