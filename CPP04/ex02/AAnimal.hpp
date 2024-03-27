#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define BRED "\033[1;31m"
# define RESET "\033[0m"

class AAnimal
{
    protected :
        std::string type;
    public :
        AAnimal();
        virtual ~AAnimal();
        AAnimal::AAnimal(const AAnimal& ref);
        // pure virtual function
        virtual void    makeSound() const = 0;
        virtual std::string getType() const = 0;
};

#endif
