#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):FragTrap(name +  "_clap_name"),
ScavTrap(name +  "_clap_name")
{
    std::cout << "Called DiamondTrap Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Called DiamondTrap Deconstructor" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Name of DiamondTrap is " << this->_name << std::endl;
}
