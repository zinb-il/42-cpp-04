/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 18:31:24 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Dog::Dog()
{
    this->type = "none";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string t):type(t)
{
    std::cout << "Dog Parameter constroctur called" << std::endl;
}

Dog::Dog(Dog const &ob)
{
    std::cout << "Dog Copy constroctur called" << std::endl;
    *this = ob;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Dog & Dog::operator=(Dog const &ob)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


void    Dog::makeSound() const
{
     std::cout << "Dog makes asound" << std::endl;
}

/********************************************************************/





/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/


std::string Dog::getType(void) const
{
    return (this->type);
}

void Dog::setType(std::string t)
{
    this->type = t;
}

/********************************************************************/



std::ostream & operator<<(std::ostream & o, Dog const &ref)
{
    std::cout << "Type : " << ref.getType() << std::endl; 
    return o;
}