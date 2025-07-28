/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:45:07 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/28 12:37:02 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template <typename T, typename Container  = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        MutantStack();
        MutantStack(const MutantStack& other);
        MutantStack& operator=(const MutantStack& other);
        ~MutantStack();
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;

};

#include  "MutantStack.tpp"