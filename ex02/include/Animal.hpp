/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbest <mbest@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:05:07 by mbest             #+#    #+#             */
/*   Updated: 2025/02/12 14:08:29 by mbest            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class AAnimal {
    protected:
        std::string _type;

    public:
        // Constructor
        AAnimal();
        AAnimal(const AAnimal& other);

        // Destructor
        virtual ~AAnimal();

        // Overloaded Operator
        AAnimal& operator=(const AAnimal& other);

        // Public Methods
        virtual void makeSound() const = 0;

        // Getters
        const std::string& getType(void) const;

        // Setters
        void setType(const std::string& type);
};

#endif