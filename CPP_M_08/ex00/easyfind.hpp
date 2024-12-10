/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 23:00:51 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/11 00:15:40 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyfind(T& vec, int occ)
{
    typename T::iterator it = std::find(vec.begin(), vec.end(), occ);
    if (it == vec.end())
        throw std::runtime_error("occurrence not found");
    else
        return it;
}

#endif
