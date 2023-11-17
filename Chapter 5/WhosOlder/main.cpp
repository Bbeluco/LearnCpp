#include <iostream>
#include <string>

std::string getName(int numberPerson) {
    std::cout << "Enter the name of person #" << numberPerson <<": ";
    std::string namePerson{};
    std::getline(std::cin >> std::ws, namePerson);

    return namePerson;
}

int getAge(std::string_view name) {
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void sayWhoIsOlder(std::string_view p1, int age1, std::string_view p2, int age2) {
    std::cout << p1 << " (age " << age1 << ") is older than " << p2 << " age (" << age2 << ")\n";
}


int main()
{
    std::string namePersonOne{getName(1)};
    int agePersonOne{getAge(namePersonOne)};

    std::string namePersonTwo{getName(2)};
    int agePersonTwo{getAge(namePersonTwo)};

    if(agePersonOne > agePersonTwo) {
        sayWhoIsOlder(namePersonOne, agePersonOne, namePersonTwo, agePersonTwo);
    } else {
        sayWhoIsOlder(namePersonTwo, agePersonTwo, namePersonOne, agePersonOne);
    }
    return 0;
}
