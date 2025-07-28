/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:27:14 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 10:38:36 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>  // std::sort, std::min_element, std::max_element
#include <limits>     // std::numeric_limits
#include <stdexcept>  // std::out_of_range, std::logic_error
#include <cstdlib>

template <typename Container>
struct HasReserve {
    static const bool value = false;
};

template <typename T, typename Alloc>
struct HasReserve<std::vector<T, Alloc> > {
    static const bool value = true;
};

template <typename Container, bool HasReserveFlag = HasReserve<Container>::value>
struct ReserveHelper {
    static void reserve(Container&, unsigned int) {
        // No hace nada
    }
};

template <typename Container>
struct ReserveHelper<Container, true> {
    static void reserve(Container& c, unsigned int n) {
        c.reserve(n);
    }
};

template<typename Container>
void sortContainer(Container& c) {
    std::sort(c.begin(), c.end());
}

template<typename T, typename Alloc>
void sortContainer(std::list<T, Alloc>& c) {
    c.sort();
}

template <typename Container>
Span<Container>::Span(){}

template <typename Container>
Span<Container>::Span(unsigned int n):  _span(), _size(n)
{
    ReserveHelper<Container>::reserve(_span, _size);
}
template <typename Container>
Span<Container>::Span(const Span<Container>& other)
{
    _size = other._size;
    _span = other._span;
}
template <typename Container>
Span<Container>& Span<Container>::operator = (const Span<Container>& other)
{
    if (this != &other)
    {
        _size = other._size;
        _span = other._span;
    }
    return *this;
}

template <typename Container>
Span<Container>::~Span(){}

template <typename Container>
void Span<Container>::addNumber(int num)
{
    if (_span.size() >= _size )
        throw std::out_of_range("Container is full");
    _span.push_back(num);
    
}
template <typename Container>
int Span<Container>::shortestSpan() const
{
    int diff;
    if (_span.size() < 2)
        throw std::logic_error("Not enough elements");
    Container tmp = _span;
    sortContainer(tmp);
    typename Container::const_iterator it = tmp.begin();
    typename Container::const_iterator prev = it++;
    int minDiff = std::numeric_limits<int>::max();
    for (;it!=tmp.end();it++,prev++)
    {
        diff = std::abs(*prev - *it);
        if (diff < minDiff)
            minDiff= diff;
    }
    return minDiff;
}


template <typename Container>
int Span<Container>::longestSpan() const
{
    if (_span.size() < 2)
        throw std::logic_error("Not enough elements");

    int minVal = *std::min_element(_span.begin(), _span.end());
    int maxVal = *std::max_element(_span.begin(), _span.end());

    return maxVal - minVal;
}
