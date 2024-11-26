/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:16:15 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/26 18:07:19 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
class ScalarConverter
{
    private :
        ScalarConverter();
    public :
        static int converte(std::string data);
};

void char_case(std::string data);
void int_case(std::string data);
void float_case(std::string data);
void double_case(std::string data);

#endif