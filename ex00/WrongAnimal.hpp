/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:55:39 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 18:16:41 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "header.h"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(std::string t);
        WrongAnimal(WrongAnimal const &ob);

        WrongAnimal & operator=(WrongAnimal const &ob);
        void    makeSound(void) const;

        std::string getType(void) const;
        void        setType(std::string t);
};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & ref);

#endif