/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:16:13 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/06 23:20:39 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int len(std::string data)
{
    int i = 0;
    while (data[i])
        i++;
    return i;
}

int digit(char c)
{
    if (c >= 48 && c <= 57)
        return EXIT_SUCCESS;
    return EXIT_FAILURE;
}

int is_integer(std::string data)
{
    int i = 0;
    while (data[i])
    {
        if (digit(data[i]) == EXIT_FAILURE)
            return EXIT_FAILURE;
        i++;
    }
    return EXIT_SUCCESS;
}

int pars(std::string data)
{
    int i = 1, ver = 0, flo = 0;
    if (is_integer(data) == EXIT_SUCCESS)
        return 2;
    if (len(data) == 1)
        return EXIT_SUCCESS;
    if (data[0] == '-' || data[0] == '+' || digit(data[0]) == EXIT_SUCCESS || data[0] == '.')
    {
        if (data[0] == '.')
            ver = 1;
        while (data[i])
        {
            if (data[i] == '.' && ver == 0)
            {
                if (digit(data[i - 1]) == EXIT_FAILURE)
                {
                    return EXIT_FAILURE;
                }
                ver = 1;
            }
            else if (data[i] == 'f' && ver == 1 && flo == 0)
            {
                flo = 1;
                if (data[i + 1] != '\0' || i == 1)
                    return EXIT_FAILURE;
            }
            else if (digit(data[i]) == EXIT_FAILURE)
                return EXIT_FAILURE;
            i++;
        }
        if (flo == 1)
            return 3;
        else if (flo == 0 && ver == 1)
            return 4;
        else
            return 2;
    }
    return EXIT_FAILURE;
}

int int_check(std::string data)
{
    double value = std::atof(data.c_str());
    std::cout << value << std::endl;
    return 0;
}

int check_nan(std::string data)
{
    if (std::strncmp(data.c_str(), "nan", 3) == 0)
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "nan" << "f" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
        return 1;
    }
    if (std::strncmp(data.c_str(), "-inf", 4) == 0)
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "-inf" << "f" << std::endl;
        std::cout << "double: " << "-inf" << std::endl;
        return 2;
    }
    if (std::strncmp(data.c_str(), "+inf", 4) == 0)
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "+inf" << "f" << std::endl;
        std::cout << "double: " << "+inf" << std::endl;
        return 3;
    }
    return 0;
}

int ScalarConverter::converte(std::string data)
{
    // Set the precision and force fixed-point notation
    std::cout << std::fixed << std::setprecision(1);

    if (check_nan(data) != 0)
        return EXIT_SUCCESS;

    int flag = pars(data);
    if (flag == EXIT_FAILURE)
        return EXIT_FAILURE;
    if (flag == 0)
        char_case(data);
    if (flag == 2)
        int_case(data);
    if (flag == 3)
        float_case(data);
    if (flag == 4)
        double_case(data);
    return EXIT_SUCCESS;
}
