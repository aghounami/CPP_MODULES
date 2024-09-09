/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:09:22 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/21 16:36:18 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    int i = 1;
    int j = 0;
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[i]) {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]); 
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}