/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:21:01 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 12:35:56 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"  // Tu clase MutantStack

int main()
{
    // Usando MutantStack (basado en std::stack, con iteradores)
    std::cout << "Usando MutantStack:" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;  // Imprime 17
    mstack.pop();
    std::cout << mstack.size() << std::endl; // Imprime 1 (queda solo el 5)
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // Ahora usando std::list para la misma secuencia y comportamiento similar
    std::cout << "\nUsando std::list:" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;   // Equivale a top() -> 17
    lst.pop_back();
    std::cout << lst.size() << std::endl;   // Imprime 1
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }

    return 0;
}
