/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:00:43 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 22:15:32 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "header.h"

class Character
{
    private:
        std::string & _name;
    public:
        Character();
        virtual ~Character();
        Character(std::string name);
        Character(Character const &ob);
        Character & operator=(Character const &ob);
        virtual std::string const & getName();
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, Character& target);
    
};

#endif