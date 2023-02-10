/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:21:23 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 12:01:54 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef DOG_HPP
# define DOG_HPP

#include "header.h"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        Dog(std::string t);
        Dog(Dog const &ob);

        Dog & operator=(Dog const &ob);
        virtual void    makeSound(void) const;
};

#endif