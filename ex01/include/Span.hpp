/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:13:38 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 11:31:21 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <deque>
#include <algorithm>
#include <stdexcept>

class Span
{
    private:
        std::vector<int> _span;
        unsigned int _size;
        Span();
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator = (const Span& other);
        ~Span();
       
        void    addNumber(int inser);
        void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan()const ;
        int     longestSpan() const ;

        class FullContainerException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class NotEnoughNumbersException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};



