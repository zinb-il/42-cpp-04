/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:56:18 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 21:56:21 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Cure::Cure(): AMateria()
{
    this->_type = "cure";
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(std::string const & type):AMateria(type)
{
    this->_type = type;
    std::cout << "Cure Parameter constroctur called" << std::endl;
}

Cure::Cure(Cure const &ob): AMateria(ob)
{
    std::cout << "Cure Copy constroctur called" << std::endl;
    *this = ob;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Cure & Cure::operator=(Cure const &ob)
{
    std::cout << "Cure Copy assignment operator called" << std::endl;
    this->_type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure(this->_type);
    return(cure);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
}

/********************************************************************/
