/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:00:43 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 14:05:04 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "header.h"

class Character
{
    public:
        Character();
        virtual ~Character();
        Character(Character const &ob);
        Character &operator=(Character const &ob);
        virtual std::string const & getName();
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, Character& target);
    
};

#endif