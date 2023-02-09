/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:55:39 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 18:16:41 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "header.h"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string t);
        Animal(Animal const &ob);

        Animal & operator=(Animal const &ob);
        virtual void    makeSound(void) const;

        std::string getType(void) const;
        void        setType(std::string t);
};

std::ostream & operator<<(std::ostream & o, Animal const & ref);

#endif