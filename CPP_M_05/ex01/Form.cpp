/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:39:57 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/22 18:14:20 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(150)
{
}

Form::Form(std::string const name, int grade) : name(name), isSigned(false), gradeToSign(grade)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign)
{
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        isSigned = other.isSigned;
    }
    return *this;
}

Form::~Form()
{
}

std::string const &Form::getName() const
{
    return name;
}

int Form::getGrade() const
{
    return gradeToSign;
}

bool Form::signForm() const
{
    return isSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Form const &other)
{
    out << "Form name: " << other.getName() << std::endl;
    out << "Grade to sign: " << other.getGrade() << std::endl;
    out << "Is signed: " << other.signForm() << std::endl;
    return out;
}

