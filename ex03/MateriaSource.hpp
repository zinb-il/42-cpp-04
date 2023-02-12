/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:18:50 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/12 23:11:59 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "header.h"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_amteria[NUM];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(MateriaSource const &ob);
        MateriaSource & operator=(MateriaSource const &ob);
            
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
        AMateria *getAMateria(int in) const ;
};

#endif