/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:13:13 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/06 12:44:23 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char** argv) {
    Sed sed;
    
    if (argc != 4) {
        std::cerr << "Error: Incorrect number of arguments." << std::endl;
        return 1;
    }
    
    std::string filePath = argv[1];
    std::string oldWord = argv[2];
    std::string newWord = argv[3];
    sed.replace(filePath, oldWord, newWord);
    return 0;
}
