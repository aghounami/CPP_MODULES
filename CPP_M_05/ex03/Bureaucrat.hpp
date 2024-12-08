/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:31:39 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 10:53:55 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

// forward declaration1
class AForm;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        ~Bureaucrat();
        std::string const &getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(AForm &form);
        void executeForm(AForm &form);
        // cutom exceptionƒ
        class GradeTooHighException : public std::exception
        {
            public:
                 const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                 const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif