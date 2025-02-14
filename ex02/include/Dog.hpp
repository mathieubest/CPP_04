/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbest <mbest@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:24:44 by mbest             #+#    #+#             */
/*   Updated: 2025/02/12 14:08:56 by mbest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain *brain;
        
    public:
        // Constructor
        Dog();
        Dog(const Dog& other);

        // Destructor
        ~Dog();

        // Overloaded Operator
        Dog& operator=(const Dog& other);

        // Public Methods
        void makeSound() const;
};

#endif