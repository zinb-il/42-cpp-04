/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:26:04 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 18:14:23 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef BRAIN_HPP
# define BRAIN_HPP

#include "header.h"

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain();
        ~Brain();
        Brain(Brain const &ob);
        Brain & operator=(Brain const &ob);

        std::string* getIdeas(void) const;
        void setIdeas(std::string *new_ideas);
};

std::ostream & operator<<(std::ostream & o, Brain const & ref);

#   endif