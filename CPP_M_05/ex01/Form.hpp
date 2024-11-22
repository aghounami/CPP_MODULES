/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:40:00 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/22 18:11:54 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
    private :
        std::string const name;
        bool isSigned;
        int const gradeToSign;

    public :
        Form();
        Form(std::string const name, int grade);
        Form(Form const &src);
        Form &operator=(Form const &other);
        ~Form();
        std::string const &getName() const;
        int getGrade() const;
        bool signForm() const;
        void beSigned(Bureaucrat &bureaucrat);
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

std::ostream &operator<<(std::ostream &out, Form const &other);

#endif 