/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:12:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 16:20:52 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void test_normal(void) {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");

  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
}

void test_other(void) {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Ice());
  src->learnMateria(NULL);
  src->learnMateria(new Cure());
  src->learnMateria(new Cure()); 
  src->learnMateria(new Cure());

  AMateria* tmp;
  tmp = src->createMateria("test");

  ICharacter* me = new Character("me");
  ICharacter* bob = new  Character("bob");

  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  AMateria* tmp1 = src->createMateria("ice");
  me->equip(tmp1);
  AMateria* tmp2 = src->createMateria("cure");
  me->equip(tmp);

  me->unequip(2);
  me->unequip(3);

  bob->equip(tmp1);
  bob->equip(tmp2);

  me->use(0, *bob);
  me->use(1, *bob);

  bob->use(0, *me);
  bob->use(1, *me);

  delete bob;
  delete me;
  delete src;
}

int main(void) {
    std::cout << std::setfill('=') << std::setw(100) << "\n" << std::setfill(' ');
    test_normal();
    std::cout << std::setfill('=') << std::setw(100) << "\n" << std::setfill(' ');
    test_other();
    std::cout << std::setfill('=') << std::setw(100) << "\n" << std::setfill(' ');
    system("leaks animal");
    return 0;
}

// int main(void)
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     system("leaks animal");
//     return 0;
// }