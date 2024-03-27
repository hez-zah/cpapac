#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->Dog_br = new Brain;
    std::cout << GREEN << "Called Dog Default Constractor" << RESET << std::endl;
}

Dog::~Dog()
{
    delete (this->Dog_br);
    std::cout << "Called Dog Deconstractor" << std::endl;
}

Dog::Dog(Dog& other)
{
    std::cout << "Deep Copy Dog" << std::endl;
    this->type = other.type;
    this->Dog_br = new Brain();
    *(this->Dog_br) = *(other.Dog_br);
}

void    Dog::makeSound() const
{
    std::cout << "Sound of the " << this->type << " is barking" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
