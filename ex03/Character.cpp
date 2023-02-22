/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:00:40 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 16:00:49 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Character::Character()
{
    std::cout << "Character Default constructor called" << std::endl;
    for (size_t i = 0; i < NUM; i++)
        _amteria[i] = 0;
}

Character::Character(Character const &ob)
{
    std::cout << "Character Copy constroctur called" << std::endl;
    *this = ob;
}

Character::~Character()
{
    std::cout << "Character Destructor called " << std::endl;
    for (size_t i = 0; i < NUM; i++)
    {
        if (_amteria[i])
            delete(_amteria[i]);
    }
}

Character::Character(std::string name):_name(name)
{
    std::cout << "Character Parameter constroctur called " << std::endl;
    for (size_t i = 0; i < NUM; i++)
        _amteria[i] = 0;
}
/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Character & Character::operator=(Character const &ob)
{
    std::cout << "Character Copy assignment operator called" << std::endl;
    this->_name = ob.getName();
    for (size_t i = 0; i < NUM; i++)
    {
        if (_amteria[i])
            delete(_amteria[i]);
    }   
    for (size_t i = 0; i < NUM; i++)
    {
        _amteria[i] = 0;
        if (ob.getAMateria(i))
            _amteria[i] = ob.getAMateria(i)->clone();
    }
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/

AMateria * Character::getAMateria(int in) const
{
    if (in >= 0 && in < NUM)
        return this->_amteria[in];
    return 0;
}


std::string const & Character::getName() const
{
    return (this->_name);
}

/********************************************************************/


/********************************************************************/
/*                          Public functions                        */
/********************************************************************/

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (size_t i = 0; i < NUM; i++)
    {
        if(!_amteria[i])
        {
            _amteria[i] = m;
            return ;
        }
    }
    std::cout << "La liste des AMateria est complète" << std::endl;
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < NUM)
        _amteria[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < NUM)
        _amteria[idx]->use(target);
}

/********************************************************************/
