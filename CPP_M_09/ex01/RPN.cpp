/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:35:03 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 23:47:38 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void RPN::operation(char ch)
{
    if (stk.size() == 2 || stk.size() == 3)
    {
        double second = stk.top();
        stk.pop();
        double first = stk.top();
        stk.pop();
        if (ch == '*')
            stk.push(first * second);
        else if (ch == '-')
            stk.push(first - second);
        else if (ch == '+')
            stk.push(first + second);
        else if (ch == '/')
            stk.push(first / second);
    }
    else
    {
        std::cerr << "Error in operation" << std::endl;
        exit(1);
    }
}

void RPN::execute(std::string number)
{
    if (stk.size() < 3)
        stk.push((int)std::atof(number.c_str()));
    else
    {
        std::cerr << "Error in execute" << std::endl;
        exit(1);
    }
}

RPN::RPN(std::string source)
{
    for (unsigned int i = 0; i < source.size(); i++)
    {
        if ((source[i] < '0' || source[i] > '9') && source[i] != '-' && source[i] != '+' && source[i] != '/' && source[i] != '*' && source[i] != ' ' && source[i] != '\t')
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        else if ((source[i] >= '0' && source[i] <= '9'))
            this->execute(&source[i]);
        else if (source[i] == '*' || source[i] == '-' || source[i] == '+' || source[i] == '/')
            operation(source[i]);
    }
    if (stk.size() == 1)
        std::cout << this->stk.top() << std::endl;
    else
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
}

RPN::RPN() {}

RPN::RPN(const RPN &other) : stk(other.stk) {}

RPN &RPN::operator=(const RPN &other){
    if (this != &other)
        stk = other.stk;
    return *this;
}

RPN::~RPN() {}
