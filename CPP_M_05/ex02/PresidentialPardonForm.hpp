/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:23:20 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/23 10:46:03 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        const std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
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