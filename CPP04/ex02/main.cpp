#include "Cat.hpp"
#include "Dog.hpp"

void leaks(){system("leaks Brain");}

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "\n=============" << std::endl;
    delete j;//should not create a leak
    delete i;
    std::cout << "\n=============" << std::endl;
    const AAnimal *arr[4];
    int k = -1;
    while (++k < 4)
        k < 2 ? (arr[k] = new Dog()) : (arr[k] = new Cat());
    std::cout << "\n=============" << std::endl;
    k = -1;
    while (++k < 4)
        delete arr[k];
    return 0;
}
