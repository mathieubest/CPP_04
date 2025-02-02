/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:05:07 by mbest             #+#    #+#             */
/*   Updated: 2025/02/02 22:17:00 by mathieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class A_Animal {
    protected:
        std::string _type;

    public:
        // Constructor
        A_Animal();
        A_Animal(const A_Animal& other);

        // Destructor
        virtual ~A_Animal();

        // Overloaded Operator
        A_Animal& operator=(const A_Animal& other);

        // Public Methods
        virtual void makeSound() const = 0;

        // Getters
        const std::string& getType(void) const;

        // Setters
        void setType(const std::string& type);
};

#endif