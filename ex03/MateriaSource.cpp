/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:18:48 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 23:13:43 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"



/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default constructor called" << std::endl;
}


MateriaSource::MateriaSource(MateriaSource const &ob)
{
    std::cout << "MateriaSource Copy constroctur called" << std::endl;
    *this = ob;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called " << std::endl;
}

/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

MateriaSource & MateriaSource::operator=(MateriaSource const &ob)
{
    std::cout << "MateriaSource Copy assignment operator called" << std::endl;
    if (_amteria)
    {
        for (size_t i = 0; i < NUM; i++)
        {
            if (_amteria[i])
                delete(_amteria[i]);
        }
        
    }
    for (size_t i = 0; i < NUM; i++)
    {
        if ((ob.getAMateria(i))->getType() == ICE)
            _amteria[i] = new Ice(ob.getAMateria(i)->getType());
        if ((ob.getAMateria(i))->getType() == CURE)
            _amteria[i] = new Cure(ob.getAMateria(i)->getType());
    }
    return (*this);
}

/********************************************************************/


/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/


AMateria * MateriaSource::getAMateria(int in) const
{
    return this->_amteria[in];
}

/********************************************************************/
