/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:18:48 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 17:13:34 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"



/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default constructor called" << std::endl;
    for (size_t i = 0; i < NUM; i++)
        _amteria[i] = 0;
}


MateriaSource::MateriaSource(MateriaSource const &ob)
{
    std::cout << "MateriaSource Copy constroctur called" << std::endl;
    *this = ob;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called " << std::endl;
    for (size_t i = 0; i < NUM; i++)
    {
        if (_amteria[i])
            delete(_amteria[i]);
    }
}

/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

MateriaSource & MateriaSource::operator=(MateriaSource const &ob)
{
    std::cout << "MateriaSource Copy assignment operator called" << std::endl;
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


AMateria * MateriaSource::getAMateria(int in) const
{
    if (in >= 0 && in < NUM)
        return this->_amteria[in];
    return 0;
}

/********************************************************************/



/********************************************************************/
/*                          Public functions                        */
/********************************************************************/

void MateriaSource::learnMateria(AMateria* am)
{
    if (!am)
        return;
    for (size_t i = 0; i < NUM; i++)
    {
        if(!_amteria[i])
        {
            std::cout << GRN << "The new Amateria is well added" << am->getType() << WHT <<std::endl;
            _amteria[i] = am;
            return ;
        }
    }
    delete(am);
    std::cout << RED << "The list of AMateria is complete" << WHT <<std::endl;
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < NUM; i++)
    {
        if(_amteria[i] && _amteria[i]->getType() == type)
        {
            std::cout << GRN << "Create a new <" << type << ">" << WHT << std::endl;
            return (_amteria[i]->clone());
        }
    }
    std::cout << RED << "This type doesn't exist <" << type << ">" << WHT << std::endl;
   return 0;
}

/********************************************************************/
