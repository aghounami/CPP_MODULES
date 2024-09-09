/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:13:47 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/05 10:55:21 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address of ptr: " << ptr << std::endl;
    std::cout << "Memory address of ref: " << &ref << std::endl;
    std::cout << "              -------" << std::endl;
    std::cout << "The value of the string variable: '" << str << "'" << std::endl;
    std::cout << "The value pointed to by stringPTR: '" << *ptr << "'" << std::endl;
    std::cout << "The value pointed to by stringREF: '" << ref << "'" << std::endl;
    return 0;
}
