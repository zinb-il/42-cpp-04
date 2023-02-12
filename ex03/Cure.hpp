/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:45:24 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 13:55:36 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CURE_HPP
# define CURE_HPP

#include "header.h"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(std::string const & type);
        Cure(Cure const &ob);
        
        Cure & operator=(Cure const &ob);
        std::string const & getType() const;
        virtual AMateria* clone() const;
};

#endif