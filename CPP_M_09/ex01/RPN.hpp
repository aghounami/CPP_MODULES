/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:54 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/13 16:45:11 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> stk;
    public :
        RPN();
        RPN(std::string);
        RPN(const RPN& other);
        RPN &operator=(const RPN& other);
        ~RPN();
        void execute(std::string number);
        void operation(char ch);
        
};

#endif