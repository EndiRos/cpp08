/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:27:14 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 11:32:16 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>  // std::sort, std::min_element, std::max_element
#include <limits>     // std::numeric_limits
#include <stdexcept>  // std::out_of_range, std::logic_error
#include <cstdlib>
#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n):  _span(), _size(n)
{
    _span.reserve(_size);
}

Span::Span(const Span& other)
{
    _size = other._size;
    _span = other._span;
}
Span& Span::operator = (const Span& other)
{
    if (this != &other)
    {
        _size = other._size;
        _span = other._span;
    }
    return *this;
}


Span::~Span(){}


void Span::addNumber(int num)
{
    if (_span.size() >= _size )
        throw FullContainerException();
    _span.push_back(num);
    
}
void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_span.size() + std::distance(begin, end) > _size)
		throw FullContainerException();
	_span.insert(_span.end(), begin, end);
}

int Span::shortestSpan() const
{
    int diff;
    if (_span.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> tmp = _span;
    std::sort(tmp.begin(), tmp.end());
    int minDiff = std::numeric_limits<int>::max();
    for (unsigned int i = 1; i < tmp.size(); i++)
    {
        diff = tmp[i-1] - tmp[i];
        if (diff < minDiff)
            minDiff= diff;
    }
    return minDiff;
}


int Span::longestSpan() const
{
    if (_span.size() < 2)
        throw NotEnoughNumbersException();

    int minVal = *std::min_element(_span.begin(), _span.end());
    int maxVal = *std::max_element(_span.begin(), _span.end());

    return maxVal - minVal;
}

const char *Span::FullContainerException::what() const throw()
{
	return ("Container is full");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers in container");
}
