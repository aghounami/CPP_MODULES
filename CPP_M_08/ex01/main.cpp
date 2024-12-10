/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:36:45 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/11 00:33:17 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        std::vector<int> sp;
        sp.push_back(6);
        sp.push_back(3);
        sp.push_back(17);
        sp.push_back(9);
        sp.push_back(12);
        sp.push_back(11);

        Span vec(7);
        // Span vec(-7); overflow
        vec.addNumber(10);
        vec.addNumber(sp.begin(), sp.end());

        std::cout << vec.shortestSpan() << std::endl;
        std::cout << vec.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
