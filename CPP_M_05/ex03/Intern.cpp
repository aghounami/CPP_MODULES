/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:05:26 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/24 11:07:45 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &other)
{
    if (this != &other)
    {
    }
    return *this;
}


Intern::~Intern()
{
}

AForm *Intern::createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}
AForm* Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string formTypes[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm *(Intern::*formCreators[])(std::string) = {
        &Intern::createShrubberyCreationForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createPresidentialPardonForm
    };

    for (int i = 0; i < 3; ++i)
    {
        if (formName == formTypes[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formCreators[i])(target);
        }
    }

    std::cout << "Intern could not find the form: " << formName << std::endl;
    return NULL ;
}
