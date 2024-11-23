/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:56:33 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 10:17:48 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const &other);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const &executor) const;
        class FormnotSigned : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Form not signed";
                }
        };
        
};

#endif