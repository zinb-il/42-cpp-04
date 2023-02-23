/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:12:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 21:14:44 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define N 2
#define I_SIZE 10

int main(void)
{
    Animal *anims[N];
    Animal anims1[N];
    
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    for (size_t i = 0; i < N; i++)
    {
        if (i % 2)
            anims[i] = new Cat("Cat " + std::to_string(i + 1));
        else
            anims[i] = new Dog("Dog " + std::to_string(i + 1));
        std::cout << anims[i]->getType() << std::endl;
    }
    for (size_t i = 0; i < N; i++)
        delete(anims[i]);
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    for (size_t i = 0; i < N; i++)
    {
        if (i % 2)
            anims1[i] =  Cat("Cat " + std::to_string(i + 1));
        else
            anims1[i] =  Dog("Dog " + std::to_string(i + 1));
    }
    for (size_t i = 0; i < N; i++)
        std::cout << anims1[i].getType() << std::endl;

    
    Dog d("Dog1");
    
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    {
        Dog tmp1 = d;
    }
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    std::cout << d << std::endl;

    
    Cat c("Cat1");
    
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    {
        Cat tmp2 = c;
    }
    std::cout << GRN << "---------------------------------------" << WHT << std::endl;
    std::cout << c << std::endl;

    // Animal* j = new Dog();
    // Animal* i = new Cat();
    // Dog d;

    // j->makeSound();
    // i->makeSound();
    // d = (*dynamic_cast<Dog *>(j));
    // std::cout << d << std::endl;
    // delete j;
    // delete i;

    return (0);
}