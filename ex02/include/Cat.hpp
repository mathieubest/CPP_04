#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public A_Animal {
    private:
        Brain* brain;

    public:
        // Constructor
        Cat();
        Cat(const Cat& other);

        // Destructor
        ~Cat();

        // Overloaded Operator
        Cat& operator=(const Cat& other);

        // Public Methods
        void makeSound() const;
};

#endif