/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/24 11:32:22 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 50);
        bureaucrat.decrementGrade();
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
        Form form("form", 40, 100);
        std::cout << form;
        bureaucrat.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
        