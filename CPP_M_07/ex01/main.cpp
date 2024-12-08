/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 01:12:55 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/08 01:32:02 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename L>
void print_element(L elem)
{
    std::cout << elem << std::endl;
}

int main()
{
    std::string strarray[5] = {"aa", "bb", "cc", "dd", "ee"};
    size_t length = 5;
    iter(strarray, length, print_element<std::string>);

    int intarray[5] = {1,2,3,4,5};
    iter(intarray, length, print_element<int>);
}