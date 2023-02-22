/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:12:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 17:13:59 by ziloughm         ###   ########.fr       */
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

void mon_test(void) {
    
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
  me->equip(tmp2);

  std::cout << RED << "Use 3 and 2" << WHT << std::endl;
  me->use(2, *me);
  me->use(3, *me);
  std::cout << RED << "End of Use 3 and 2" << WHT << std::endl;

  std::cout << RED << "Unequip 3 and 2" << WHT << std::endl;
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
    std::cout << RED << std::setfill('*') << std::setw(150) << WHT << std::endl;
    test_normal();
    std::cout << RED << std::setfill('*') << std::setw(150) << WHT << std::endl;
    mon_test();
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