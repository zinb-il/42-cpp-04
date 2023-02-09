/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:21:23 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 18:29:38 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef DOG_HPP
# define DOG_HPP

#include "header.h"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(std::string t);
        Dog(Dog const &ob);

        Dog & operator=(Dog const &ob);
        void    makeSound(void) const;
};

#endif