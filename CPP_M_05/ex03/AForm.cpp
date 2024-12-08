/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:39:57 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/22 22:05:08 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(2), gradeToExecute(2)
{
}

AForm::AForm(std::string const name, int grade, int gradeToExecute) : name(name), isSigned(false), gradeToSign(grade), gradeToExecute(gradeToExecute)
{
    if (grade < 1  || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (grade > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
}

AForm &AForm::operator=(AForm const &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}

AForm::~AForm()
{
}

std::string const &AForm::getName() const
{
    return this->name;
}

int AForm::getGrade() const
{
    return this->gradeToSign;
}


void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    this->isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

bool AForm::getSigned() const
{
    return this->isSigned;
}

int AForm::getGradeToexecute() const
{
    return this->gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, AForm const &other)
{
    out << "AForm name: " << other.getName() << std::endl;
    out << "Grade to sign: " << other.getGrade() << std::endl;
    out << "Is signed: " << other.getSigned() << std::endl;
    out << "Grade to execute: " << other.getGradeToexecute() << std::endl;
    return out;
}
