/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:23:29 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 10:46:23 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other), target(other.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw FormnotSigned();
    if (executor.getGrade() > this->getGradeToexecute())
        throw GradeTooLowException();
    std::cout << this->target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
        
}