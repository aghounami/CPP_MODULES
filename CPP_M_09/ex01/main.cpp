/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:34 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 23:33:45 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"



int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: Wrong argumenss" << std::endl;
        return 1;
    }
    std::string av_1 = av[1];
    
    if (av_1.empty())
    {
        std::cerr << "Error: av[1] empty" << std::endl;
        return 1;
    }
    RPN obj(av[1]);
}