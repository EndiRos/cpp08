/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:51:59 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/24 09:02:15 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <algorithm>

class NotFound : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Not found";
        } 
};

template<typename T>
int easyfind(const T& cont, int num);

#include  "easyfind.tpp"