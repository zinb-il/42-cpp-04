/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:44:31 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 12:08:13 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WrongCat_HPP
# define WrongCat_HPP

#include "header.h"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(std::string t);
        WrongCat(WrongCat const &ob);

        WrongCat & operator=(WrongCat const &ob);
        void    makeSound(void) const;
};

#endif