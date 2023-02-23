/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:12:42 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/22 21:15:52 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define N 2
#define I_SIZE 10

int main(void)
{
    //Animal  a;
    Dog     d;
    Cat     c;
    Animal  *y;

    y = new Dog("new Dog");
    std::cout << d << c << std::endl;
    std::cout << y->getType() << std::endl << std::endl;

    delete(y);
    
    return (0);
}