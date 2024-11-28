/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:16:18 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/27 14:25:18 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        if (ScalarConverter::converte(argv[1]) == 1)
            std::cout << "wrong argumentssssssssssssss" << std::endl;
        return (0);
    }
    std::cout << "wrong number of arguments" << std::endl;
    return 0;
}

// #include <stdlib.h>
// int main() {
//        std::cout << std::fixed << std::setprecision(1);

//    float i = 676778787767;
//    int j =   676778787767;
   
//    std::cout << i << "\n";
//    std::cout << j << "\n";
    
//     std::string str; // UT.
//     std::cout << "Size of 'ä' in UTF-8: " << sizeof(str) << " bytes" << std::endl;

//     wchar_t wch = L'ä'; // 
//     std::cout << "Size of 'ä' as wchar_t: " << sizeof(wch) << " bytes" << std::endl;

//     return 0;
// }
