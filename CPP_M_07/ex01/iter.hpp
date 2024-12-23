/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 01:08:57 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/08 17:20:27 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
#define ITER

#include <iostream>

// Template Instantiation

template <typename T, typename F>
void iter(T *array, size_t length, F Function)
{
    size_t i = 0;
    while (i < length)
    {
        Function(array[i]);
        i++;
    }
}

#endif