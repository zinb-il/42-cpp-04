/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:56:18 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 14:10:59 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Ice::Ice(): AMateria()
{
    this->_type = "ice";
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(std::string const & type):AMateria(type)
{
    this->_type = type;
    std::cout << "Ice Parameter constroctur called" << std::endl;
}

Ice::Ice(Ice const &ob): AMateria(ob)
{
    std::cout << "Ice Copy constroctur called" << std::endl;
    *this = ob;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Ice & Ice::operator=(Ice const &ob)
{
    std::cout << "Ice Copy assignment operator called" << std::endl;
    this->_type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/

AMateria* Ice::clone() const
{
    AMateria *ice = new Ice(this->_type);
    return(ice);
}

/********************************************************************/
