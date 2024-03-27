#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

//hybird inheritance
//        A
//       / \. 
//      B   C
//       \ /
//        A

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        using FragTrap::hit_p;
        using ScavTrap::energy_p;
        using FragTrap::at_dmg;
        using ScavTrap::attack;
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void    whoAmI();
};


#endif
