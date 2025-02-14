#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

#define NUM 10

int main()
{
    int num_of_animals = 10;
    Animal **animals = new Animal*[num_of_animals];
    
    for (int i = 0; i < num_of_animals; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < num_of_animals; i++) {
        animals[i]->makeSound();
        delete animals[i];
    }
    const Animal* rand = new Cat();
    const Animal* ro = new Cat();
    rand->makeSound();
    ro->makeSound();
    delete rand;
    rand = ro;
    rand->makeSound();
    delete ro;
    delete[] animals;
    return 0;
}