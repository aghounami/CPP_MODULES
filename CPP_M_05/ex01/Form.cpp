/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:39:57 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/24 09:20:27 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(2), gradeToExecute(2)
{
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1  || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}

Form::~Form()
{
}

std::string const &Form::getName() const
{
    return this->name;
}

int Form::getGrade() const
{
    return this->gradeToSign;
}


void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

bool Form::getSigned() const
{
    return this->isSigned;
}

int Form::getGradeToexecute() const
{
    return this->gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, Form const &other)
{
    out << "Form name: " << other.getName() << std::endl;
    out << "Grade to sign: " << other.getGrade() << std::endl;
    out << "Is signed: " << other.getSigned() << std::endl;
    out << "Grade to execute: " << other.getGradeToexecute() << std::endl;
    return out;
}
