/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 13:18:48 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Cat::Cat():Animal()
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string t):Animal(t)
{
    this->type = t;
    std::cout << "Cat Parameter constroctur called" << std::endl;
}

Cat::Cat(Cat const &ob):Animal(ob)
{
    std::cout << "Cat Copy constroctur called" << std::endl;
    *this = ob;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Cat & Cat::operator=(Cat const &ob)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


void    Cat::makeSound() const
{
     std::cout << "The Cat meows" << std::endl;
}

/********************************************************************/

