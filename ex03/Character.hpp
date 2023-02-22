/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:00:43 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 15:23:21 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "header.h"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_amteria[NUM];
    public:
        Character();
        virtual ~Character();
        Character(std::string name);
        Character(Character const &ob);

        Character & operator=(Character const &ob);
        
        std::string const & getName() const;
        AMateria *getAMateria(int in) const ;
        
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    
};

#endif