/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/24 11:59:33 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Bureaucrat bureaucrat("bureaucrat", 1);

	AForm *form1 = intern.makeForm("shrubbery creation", "target1");
	AForm *form2 = intern.makeForm("robotomy request", "target2");
	AForm *form3 = intern.makeForm("presidential pardon", "target3");
	AForm *form4 = intern.makeForm("unknown form", "target4");
	
	
	bureaucrat.signForm(*form1);
	bureaucrat.executeForm(*form1);
	
	bureaucrat.signForm(*form2);
	bureaucrat.executeForm(*form2);

	bureaucrat.signForm(*form3);
	bureaucrat.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return 0;
}
