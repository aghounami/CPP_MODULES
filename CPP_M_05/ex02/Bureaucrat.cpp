/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:42 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 10:53:48 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    if (this != &other)
        this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const &Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return out;
}


void Bureaucrat::signForm(AForm &form)
{
    if (this->grade <= form.getGrade())
        std::cout << this->name << " signs " << form.getName() << std::endl;
    else
        std::cout << this->name << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
}

void Bureaucrat::executeForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        form.execute(*this);
        std::cout << this->name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << this->name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}