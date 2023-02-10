/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 11:50:37 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

WrongCat::WrongCat():WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string t):WrongAnimal(t)
{
    this->type = t;
    std::cout << "WrongCat Parameter constroctur called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &ob)
{
    std::cout << "WrongCat Copy constroctur called" << std::endl;
    *this = ob;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

WrongCat & WrongCat::operator=(WrongCat const &ob)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    this->type = ob.getType();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


void    WrongCat::makeSound() const
{
     std::cout << "The WrongCat meows" << std::endl;
}

/********************************************************************/

