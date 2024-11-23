/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:40:00 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 09:12:13 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

// forward declaration
class Bureaucrat;
class AForm
{
    private :
        std::string const name;
        bool isSigned;
        int const gradeToSign;
        int const gradeToExecute;

    public :
        AForm();
        AForm(std::string const name, int gradeToSign, int gradeToExecute);
        AForm(AForm const &src);
        AForm &operator=(AForm const &other);
        ~AForm();
        std::string const &getName() const;
        int getGrade() const;
        bool getSigned() const;
        int getGradeToexecute() const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };        
};

std::ostream &operator<<(std::ostream &out, AForm const &other);

#endif 