/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 17:27:25 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Cat::Cat():Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string t):Animal(t)
{
    this->type = t;
    this->brain = new Brain();
    std::cout << "Cat Parameter constroctur called" << std::endl;
}

Cat::Cat(Cat const &ob): Animal(ob)
{
    std::cout << "Cat Copy constroctur called" << std::endl;
    *this = ob;
}

Cat::~Cat()
{
    delete(this->brain);
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
    if (this->brain)
    {
        delete(this->brain);
        this->brain = NULL;
    }
    this->brain = new Brain();
    *this->brain = *ob.getBrain();
    return (*this);
}

/********************************************************************/



/********************************************************************/
/*                        Getters functions                         */
/********************************************************************/


Brain * Cat::getBrain(void) const
{
    return brain;
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

std::ostream & operator<<(std::ostream & o, Cat const &ref)
{
    std::cout << "Type : " << ref.getType() << std::endl; 
    std::cout << "Cat Ideas :" << std::endl << *ref.getBrain() << std::endl;
    return o;
}