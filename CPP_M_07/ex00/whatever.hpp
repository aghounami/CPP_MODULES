/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:15:16 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/07 23:56:35 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
#define WHATEVER

#include <iostream>

template <typename T>
void swap(T &value_1, T &value_2)
{
    T temp = value_1;
    value_1 = value_2;
    value_2 = temp;
}
template <typename T>
T& min(T &value_1, T &value_2)
{
    if (value_1 < value_2)
        return value_1;
    return value_2;
}
template <typename T>
T& max(T &value_1, T &value_2)
{
    if (value_1 > value_2)
        return value_1;
    return value_2;
}


#endif