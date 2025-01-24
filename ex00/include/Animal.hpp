/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbest <mbest@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:05:07 by mbest             #+#    #+#             */
/*   Updated: 2025/01/24 16:09:39 by mbest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class Animal {
    protected:
        std::string _type;

    public:
        // Constructor
        Animal();
        Animal(const Animal& other);

        // Destructor
        ~Animal();

        // Overloaded Operator
        Animal& operator=(const Animal& other);

        // Public Methods
        virtual void makeSound() const;

        // Getters
        const std::string& getType(void) const;

        // Setters
        void setType(const std::string& type);
};

#endif