/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:14:37 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 09:58:29 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "Span.hpp"

int main() {
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
