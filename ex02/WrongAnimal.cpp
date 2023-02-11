/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:59:24 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 11:50:44 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string t):type(t)
{
    std::cout << "WrongAnimal Parameter constroctur called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &ob)
{
    std::cout << "WrongAnimal Copy constroctur called" << std::endl;
    *this = ob;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &ob)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


void    WrongAnimal::makeSound() const
{
     std::cout << "WrongAnimal makes a sound" << std::endl;
}

/********************************************************************/





/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/


std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::setType(std::string t)
{
    this->type = t;
}

/********************************************************************/



std::ostream & operator<<(std::ostream & o, WrongAnimal const &ref)
{
    std::cout << "Type : " << ref.getType() << std::endl; 
    return o;
}

