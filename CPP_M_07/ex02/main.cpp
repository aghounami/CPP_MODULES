/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:53:27 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/08 20:28:01 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
    try
    {
        Array<int> a(5);
        Array<int> b(a);
        Array<int> c;

        for(unsigned int i = 0; i < a.size(); i++)
            a[i] = i + 1;
        b = a;
        for(unsigned int i = 0; i <= a.size(); i++)
            std::cout << a[i] << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Caught an out_of_range exception: " << e.what() << '\n';
    }
}
