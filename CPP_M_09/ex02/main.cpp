/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:23:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 01:05:06 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



int main(int ac, char *argv[])
{
    if (ac < 2)
    {
        std::cerr << "Wrong Arguments" << std::endl;
        return 1;
    }
    if (ac == 2)
    {
        std::cout << argv[1] << std::endl;
        return 1;
    }
    std::vector<int> av;
    for (int i = 1; i < ac; i++)
    {
        if(check_number(argv[i]))
        {
            std::cerr << "Wrong Arguments" << std::endl;
            return 1;
        }
        av.push_back(std::atof(argv[i]));
    }
    PmergeMe object(av);
    object.process();
}
