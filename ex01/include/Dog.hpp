/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbest <mbest@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:24:44 by mbest             #+#    #+#             */
/*   Updated: 2025/01/24 15:55:37 by mbest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal {
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