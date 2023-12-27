#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    enum Type {
        dragon,
        goblin,
        ogre,
        orc,
        skeleton,
        troll,
        vampire,
        zombie,
        max_monster_types
    };

private:
    Type m_type{};
    std::string m_name{"???"};
    std::string m_roar{"???"};
    int m_hit_points{};

    std::string_view get_type_string() const;

public:
    explicit Monster(const Type& type, std::string name, std::string roar, int hit_points);

    void print() const;
};

#endif