#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        ~Animal();
        virtual void    makeSound() const;
        virtual std::string getType() const;
        Animal& operator=(const Animal& other);
};

#endif
