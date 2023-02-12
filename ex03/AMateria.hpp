/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:34:14 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 21:49:20 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "header.h"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &ob);
        
        AMateria & operator=(AMateria const &ob);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif