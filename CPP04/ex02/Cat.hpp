#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* Cat_br;
    public:
        Cat();
        Cat(Cat& other);
        ~Cat();
        void    makeSound() const;
        std::string getType() const;
};




#endif
