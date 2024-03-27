#include "Character.hpp"

Character::Character(std::string name):name(name)
{
    int i = -1;
    while (++i)
        this->inventory[i] = NULL;
}

Character::~Character()
{
    int i = -1;
    while (++i)
        if (this->inventory)
            delete this->inventory[i];
}

std::string const & Character::getName() const
{
    return this->name;
}

void equip(AMateria* m)
{
}

void unequip(int idx)
{
}

void use(int idx, ICharacter& target)
{
}
