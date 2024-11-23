/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:56:23 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 10:18:25 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this != &other)
        AForm::operator=(other);
        return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw FormnotSigned();
    if (executor.getGrade() > this->getGradeToexecute())
        throw Bureaucrat::GradeTooLowException();

    std::cout << "Brrrrr... drilling noises..." << std::endl;

    srand(static_cast<unsigned int>(time(NULL)));
    if (rand() % 2 == 0)
    {
        std::cout << this->target << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "The robotomy of " << this->target << " has failed!" << std::endl;
    }
}
