#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->hit_p = 100;
    this->energy_p = 50;
    this->at_dmg = 20;
    std::cout << "Called ScavTrap constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Called ScavTrap Deconstructor" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << PURPLE << "ScavTrap " << this->name
    << " now in Gate keeper mode" << RESET << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << GREEN << "ScavTrap " << this->name << " attacks "
    << target << ", causing " << this->at_dmg
    << " points of damage!" << RESET << std::endl;
}
