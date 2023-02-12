/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:55:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 13:56:01 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ICE_HPP
# define ICE_HPP

#include "header.h"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(std::string const & type);
        Ice(Ice const &ob);
        
        Ice & operator=(Ice const &ob);
        std::string const & getType() const;
        virtual AMateria* clone() const;
};

#endif