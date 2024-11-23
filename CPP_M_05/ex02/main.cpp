/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 11:52:34 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 2);
        bureaucrat.incrementGrade();
        ShrubberyCreationForm form("target");
        // bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
        
        // std::cout << bureaucrat;
        
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
        