/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:00:54 by enetxeba          #+#    #+#             */
/*   Updated: 2025/07/24 09:06:23 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
int easyfind(const T& cont, int num) 
{
    // No usar sizeof para contenedores STL
    for (typename T::size_type i = 0; i < cont.size(); i++)
    {
        if (cont[i] == num)
            return i;
    }
    throw NotFound();
}