/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converte.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:22:02 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/26 23:01:53 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int check_printable(char c)
{
    if (c >= 32 && c <= 126)
        return EXIT_SUCCESS;
    return EXIT_FAILURE;    
}

void char_case(std::string data)
{
    std::cout << "char: " << data[0] << std::endl;
    std::cout << "int: " << static_cast<int>(data[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(data[0]) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(data[0]) << std::endl;
}

void int_case(std::string data)
{
    double nb = std::atof(data.c_str());
    
    if (check_printable(static_cast<char>(nb)) == EXIT_SUCCESS) 
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    else
        std::cout << "Non Dsplayable" << std::endl;

    if (nb > INT_MAX || nb < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}
void float_case(std::string data)
{
    double nb = std::atof(data.c_str());
    
    if (check_printable(static_cast<char>(nb)) == EXIT_SUCCESS) 
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    else
        std::cout << "Non Dsplayable" << std::endl;

    if (nb > INT_MAX || nb < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}
void double_case(std::string data)
{
    double nb = std::atof(data.c_str());
    
    if (check_printable(static_cast<char>(nb)) == EXIT_SUCCESS) 
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    else
        std::cout << "Non Dsplayable" << std::endl;

    if (nb > INT_MAX || nb < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

