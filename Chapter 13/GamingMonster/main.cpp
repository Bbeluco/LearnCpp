#include "MonsterInformation.h"
#include <iostream>

void print_monster(const Monster& m) {
    std::cout << "This " << get_monster_type_string(m.monster) << " is named "
        << m.name << " and has " << m.health << " health." << '\n';
}

int main() {
    Monster ogre{Type_monster::ogre, "Torg", 200};
    Monster slime{Type_monster::slime, "Blurp", 100};

    print_monster(ogre);
    print_monster(slime);
    return 0;
}
