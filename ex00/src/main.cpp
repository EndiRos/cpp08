/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:16:41 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/24 09:07:21 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <algorithm>
#include "easyfind.hpp"

int main(void)
{
    int arr[] = {1, 2, 23, 4, 3, 6, 7, 8, 9, 0};
    std::vector<int> vec;
    vec.assign(arr, arr + sizeof(arr)/sizeof(arr[0]));
    
    std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), 3);
    
    if (it != vec.end())
        std::cout << "Elemento encontrado: " << *it << std::endl;
    else
        std::cout << "Elemento no encontrado" << std::endl;

   

    try {
        int found = easyfind(vec, 200);
        std::cout << "Found: " << found << std::endl;
    } catch (const NotFound& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;

}