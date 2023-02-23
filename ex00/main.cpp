/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:12:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 21:01:50 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(void)
{
    /*Animal*/
    Animal  a;
    Animal  a1("pp");
    Animal  a2(a);
    a = a1;
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    a.makeSound();
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    
    /*Dog*/
    Dog  b;
    Dog  b1("pp");
    Dog  b2(b1);
    b = b1;
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    b.makeSound();
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;

    
    /*Cat*/
    Cat  c;
    Cat  c1("pp");
    Cat  c2(c1);
    c = c1;
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    c.makeSound();
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* meta1 = new WrongAnimal();
    const WrongAnimal* i1 = new WrongCat();

    
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    std::cout << RED << "-------------Animal test--------------" << WHT << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << GRN << "---------------------------------------" << WHT << std::endl << std::endl;


    std::cout << GRN << "-------------------------------------------" << WHT << std::endl;
    std::cout << RED << "-------------WrongAnimal test--------------" << WHT << std::endl;
    std::cout << meta1->getType() << " " << std::endl;
    std::cout << i1->getType() << " " << std::endl;
    i1->makeSound();
    meta1->makeSound();
    std::cout << GRN << "--------------------------------------------" << WHT << std::endl;
    
    
    delete(meta);
    delete(j);
    delete(i);
    delete(meta1);
    delete(i1);

    
    return (0);
}