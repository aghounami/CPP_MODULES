/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:53:27 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/08 17:14:31 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> a(5);
        Array<int> b(a);

        a.setValue(0, 1);
        a.setValue(1, 2);
        a.setValue(2, 3);
        a.setValue(3, 4);
        a.setValue(4, 5);
        
        b = a;

        std::cout << "size : " << b.size() << std::endl;
        std::cout << "size : " << a.size() << std::endl;
        std::cout << a.getValue(0) << std::endl;
        std::cout << a.getValue(1) << std::endl;
        std::cout << a.getValue(2) << std::endl;
        std::cout << a.getValue(3) << std::endl;
        std::cout << a.getValue(4) << std::endl;
        
        std::cout << "------------------" << std::endl;
    
        std::cout << b.getValue(0) << std::endl;
        std::cout << b.getValue(1) << std::endl;
        std::cout << a.getValue(5) << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Caught an out_of_range exception: " << e.what() << '\n';
    }
}
