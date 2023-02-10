/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
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

Animal::Animal():type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string t):type(t)
{
    std::cout << "Animal Parameter constroctur called" << std::endl;
}

Animal::Animal(Animal const &ob)
{
    std::cout << "Animal Copy constroctur called" << std::endl;
    *this = ob;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Animal & Animal::operator=(Animal const &ob)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


void    Animal::makeSound() const
{
     std::cout << "Animal makes a sound" << std::endl;
}

/********************************************************************/





/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/


std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::setType(std::string t)
{
    this->type = t;
}

/********************************************************************/



std::ostream & operator<<(std::ostream & o, Animal const &ref)
{
    std::cout << "Type : " << ref.getType() << std::endl; 
    return o;
}

