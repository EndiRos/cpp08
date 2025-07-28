/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:13:38 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 10:16:20 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <deque>
#include <algorithm>
#include <stdexcept>

template <typename Container = std::vector<int> >
class Span
{
    private:
        Container _span;
        unsigned int _size;
        Span();
    public:
        Span(unsigned int n);
        Span(const Span<Container>& other);
        Span<Container>& operator = (const Span<Container>& other);
        ~Span();
       
        void addNumber(int inser);
        int shortestSpan()const ;
        int longestSpan() const ;

        
};

#include "Span.tpp"


