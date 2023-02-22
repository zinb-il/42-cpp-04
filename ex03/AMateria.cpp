/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:38:15 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 15:24:40 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

AMateria::AMateria():_type("AMateria")
{
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type):_type(type)
{
    std::cout << "AMateria Parameter constroctur called" << std::endl;
}

AMateria::AMateria(AMateria const &ob)
{
    std::cout << "AMateria Copy constroctur called" << std::endl;
    *this = ob;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

AMateria & AMateria::operator=(AMateria const &ob)
{
    std::cout << "AMateria Copy assignment operator called" << std::endl;
    this->_type = ob.getType();
    return (*this);
}

/********************************************************************/


/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/


std::string const & AMateria::getType(void) const
{
    return (this->_type);
}
/********************************************************************/


void AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria use " << target.getName() << "*" << std::endl;
}