/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:16:18 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/06 22:31:45 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        if (ScalarConverter::converte(argv[1]) == 1)
            std::cout << "wrong arguments" << std::endl;
        return (0);
    }
    std::cout << "wrong number of arguments" << std::endl;
    return 0;
}
