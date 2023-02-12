/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:45:24 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 22:03:25 by ziloughm         ###   ########.fr       */
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
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif