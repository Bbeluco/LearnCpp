#include <iostream>

namespace Dungeon {
    enum MonsterType {
        orc,
        globin,
        troll,
        ogre,
        skeleton
    };
}

int main()
{
    Dungeon::MonsterType monster{Dungeon::skeleton};

    if(monster == skeleton) {
        std::cout << "Its a skeleton\n";
    }
    return 0;
}
