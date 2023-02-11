/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 17:27:34 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Dog::Dog():Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string t):Animal(t)
{
    this->type = t;
    this->brain = new Brain();
    std::cout << "Dog Parameter constroctur called" << std::endl;
}

Dog::Dog(Dog const &ob):Animal(ob)
{
    std::cout << "Dog Copy constroctur called" << std::endl;
    *this = ob;
}

Dog::~Dog()
{
    delete(this->brain);
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


Brain * Dog::getBrain(void) const
{
    return brain;
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


void    Dog::makeSound() const
{
     std::cout << "The Dog barks" << std::endl;
}

/********************************************************************/

std::ostream & operator<<(std::ostream & o, Dog const &ref)
{
    std::cout << "Type : " << ref.getType() << std::endl; 
    std::cout << "Dog Ideas :" << std::endl << *ref.getBrain() << std::endl;
    return o;
}