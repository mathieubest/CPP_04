#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongCat();
    const WrongAnimal* i = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // will output the WrongAnimal sound!
    j->makeSound(); // will output the WrongAnimal sound!
    meta->makeSound(); // will output the WrongAnimal sound!

    delete meta;
    delete j;
    delete i;

    return 0;
}