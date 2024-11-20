/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/20 07:50:51 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade();
        std::cout << b1 << std::endl;
        b1.incrementGrade();
        Bureaucrat b2("b2", 150);
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
        b2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}