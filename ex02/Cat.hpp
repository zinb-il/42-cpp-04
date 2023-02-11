/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:44:31 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/10 17:22:04 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CAT_HPP
# define CAT_HPP

#include "header.h"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(std::string t);
        Cat(Cat const &ob);

        Cat & operator=(Cat const &ob);
        virtual void    makeSound(void) const;
        Brain * getBrain(void) const;
};

std::ostream & operator<<(std::ostream & o, Cat const & ref);

#endif