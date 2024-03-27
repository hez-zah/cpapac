#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->Cat_br = new Brain;
    std::cout << YELLOW << "Called Cat Default Constractor" << RESET << std::endl;
}

Cat::Cat(Cat& other)
{
    std::cout << "Deep Copy Cat" << std::endl;
    this->type = other.type;
    this->Cat_br = new Brain();
    *(this->Cat_br) = *(other.Cat_br);
}

Cat::~Cat()
{
    delete(this->Cat_br);
    std::cout << "Called Cat Deconstractor" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Sound of the " << this->type << " is meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
