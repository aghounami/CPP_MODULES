/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/22 23:06:44 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 1);
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
        Form form("form", 2);
        form.beSigned(bureaucrat);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
        