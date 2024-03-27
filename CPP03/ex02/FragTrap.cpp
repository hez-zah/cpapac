#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->hit_p = 100;
    this->energy_p = 100;
    this->at_dmg = 30;
    std::cout << "Called FragTrap Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Called FragTrap Deconstructor" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " giv high five" << std::endl;
}
