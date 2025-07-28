/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:14:37 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 10:58:06 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "Span.hpp"

//me he venido arriba, admnite cualquier tipo de container, independienteente que sea vector list u otro tipo

int main()
{
Span<> sp = Span<>(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}

/* int main() {
    try {
        std::cout << "--- Prueba con std::vector<int> ---" << std::endl;
        Span<std::vector<int> > spanVec(5);
        spanVec.addNumber(6);
        spanVec.addNumber(3);
        spanVec.addNumber(17);
        spanVec.addNumber(9);
        spanVec.addNumber(11);

        std::cout << "Shortest span: " << spanVec.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanVec.longestSpan() << std::endl;

        std::cout << "\n--- Prueba con std::list<int> ---" << std::endl;
        Span<std::list<int> > spanList(4);
        spanList.addNumber(50);
        spanList.addNumber(10);
        spanList.addNumber(40);
        spanList.addNumber(30);

        std::cout << "Shortest span: " << spanList.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanList.longestSpan() << std::endl;

        std::cout << "\n--- Prueba con std::deque<int> ---" << std::endl;
        Span<std::deque<int> > spanDeque(3);
        spanDeque.addNumber(1);
        spanDeque.addNumber(1000);
        spanDeque.addNumber(500);

        std::cout << "Shortest span: " << spanDeque.shortestSpan() << std::endl;
        std::cout << "Longest span: " << spanDeque.longestSpan() << std::endl;

        std::cout << "\n--- Prueba de excepción (contenedor lleno) ---" << std::endl;
        spanVec.addNumber(42); // Esto debería lanzar una excepción

    } catch (const std::exception& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}
 */