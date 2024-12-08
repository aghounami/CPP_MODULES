/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/24 11:37:48 by aghounam         ###   ########.fr       */
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
        Bureaucrat bureaucrat("bureaucrat", 136);
        bureaucrat.decrementGrade();
        ShrubberyCreationForm form("target");
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 40);
        bureaucrat.decrementGrade();
        RobotomyRequestForm form("target");
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 4);
        bureaucrat.decrementGrade();
        PresidentialPardonForm form("target");
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
        