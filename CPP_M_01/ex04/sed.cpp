/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:29:47 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/06 15:00:01 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed() {
    std::cout << "Sed constructor called" << std::endl;
}

Sed::~Sed() {
    std::cout << "Sed destructor called" << std::endl;
}

void Sed::replace(std::string filePath, std::string oldWord, std::string newWord) {
    std::ifstream inFile(filePath);
    if (!inFile.good()) {
        std::cerr << "Error: File does not exist." << std::endl;
        exit (1);
    }
    if (oldWord.empty()) 
    {
        std::cerr << "Error: Word cannot be empty." << std::endl;
        exit (1);
    }
    std::string content;
    std::string line;
    std::string newLine;
    int pos = 0;
    while (std::getline(inFile, line)) {
        unsigned long i = 0;
        while (i < line.length()) {
            pos = line.find(oldWord, i);
            if (pos != -1) {
                newLine = line.substr(0, pos) + newWord;
                newLine += line.substr(pos + oldWord.length());
                line = newLine;
                i = pos + newWord.length();
                }
            else 
                break;
        }
        content += line;
        if (!inFile.eof())
            content += '\n';
    }
    inFile.close();
    std::string newFilePath = filePath + ".replace";
    std::ofstream outFile(newFilePath);
    outFile << content;
    outFile.close();
}
