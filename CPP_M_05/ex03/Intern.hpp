/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:04:39 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/24 11:07:42 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        Intern &operator=(Intern const &other);
        ~Intern();
        AForm* makeForm(const std::string &formName, const std::string &target);
        
        AForm *createShrubberyCreationForm(std::string target);
        AForm *createRobotomyRequestForm(std::string target);
        AForm *createPresidentialPardonForm(std::string target);
};


#endif