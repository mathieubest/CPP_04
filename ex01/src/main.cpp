#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

#define NUM 10

int main()
{
    const Animal* j = new Cat();
    delete j;
    return 0;
}