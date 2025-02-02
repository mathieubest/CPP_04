#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas[100];
    
    public:
        // Constructor
        Brain();
        Brain(const Brain& other);

        // Destructor
        ~Brain();

        // Overloaded operator
        Brain& operator=(const Brain& other);
};

#endif