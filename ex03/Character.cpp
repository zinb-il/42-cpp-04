/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:00:40 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 14:06:31 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Character::Character():
{
    std::cout << "Character Default constructor called" << std::endl;
}


Character::Character(Character const &ob)
{
    std::cout << "Character Copy constroctur called" << std::endl;
    *this = ob;
}

Character::~Character()
{
    std::cout << "Character Destructor called " << std::endl;
}
/********************************************************************/





/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Character & Character::operator=(Character const &ob)
{
    std::cout << "Character Copy assignment operator called" << std::endl;
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


/********************************************************************/
