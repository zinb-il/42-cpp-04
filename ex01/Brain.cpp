/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:41:22 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 17:55:35 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
    this->ideas = new std::string[NUM];
    for (size_t i = 0; i < NUM; i++)
        this->ideas[i] = "Idea " + std::to_string(i + 1);
    
}

Brain::Brain(Brain const &ob)
{
    std::cout << "Brain Copy constroctur called" << std::endl;
    *this = ob;
}

Brain::~Brain()
{
    delete [] this->ideas;
    std::cout << "Brain Destructor called " << std::endl;
}
/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Brain & Brain::operator=(Brain const &ob)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this->ideas)
    {
        delete [] this->ideas;
        this->ideas = NULL;
    }
    this->ideas = new std::string[NUM];
    for (size_t i = 0; i < NUM; i++)
    {
        this->ideas[i] = (ob.getIdeas())[i];
    }
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                        Getters functions                         */
/********************************************************************/


std::string * Brain::getIdeas(void) const
{
    return (this->ideas);
}

void Brain::setIdeas(std::string *new_ideas)
{
    if (this->ideas)
        delete [] this->ideas;
    this->ideas = new std::string[NUM];
    for (size_t i = 0; i < new_ideas->size(); i++)
        this->ideas[i] = new_ideas[i];
}

/********************************************************************/

std::ostream & operator<<(std::ostream & o, Brain const &ref)
{
    std::string *ids = ref.getIdeas();
    for (size_t i = 0; i < NUM; i++)
        std::cout << i + 1 << " : "<< ids[i] << "  ";
    std::cout << std::endl;
    return o;
}
