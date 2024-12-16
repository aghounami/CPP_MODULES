/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:54 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 23:47:11 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<double> stk;
        void execute(std::string number);
        void operation(char ch);
    public :
        RPN();
        RPN(std::string);
        RPN(const RPN& other);
        RPN &operator=(const RPN& other);
        ~RPN();
        
};

#endif