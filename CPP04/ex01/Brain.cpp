#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
    std::cout << BLUE << "Called Brain Default Constractor" << RESET << std::endl;
}

Brain::~Brain()
{
    std::cout << "Called Brain Deconstractor" << std::endl;
}

Brain::Brain(Brain& other)
{
    int i = -1;
    while (++i < 100)
        this->ideas[i] = other.ideas[i];
    std::cout << "Called Brain Deep copy" << std::endl;
}
