/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:09:20 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/11 12:38:22 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<std::string> s;

        s.push("aa");
        s.push("bb");
        s.push("cc");
        s.push("dd");
        s.push("ee");
        std::stack<std::string>::container_type::iterator begin = s.begin();
        std::stack<std::string>::container_type::iterator end = s.end();

        while (begin != end)
        {
            std::cout << *begin << std::endl;
            begin++;
        }
    }
    std::cout << "--------------" << std::endl;
    {
        MutantStack<int> d;

        d.push(1);
        d.push(2);
        d.push(3);
        d.push(4);
        d.push(5);
        std::stack<int>::container_type::iterator begin = d.begin();
        std::stack<int>::container_type::iterator end = d.end();

        while (begin != end)
        {
            std::cout << *begin << std::endl;
            begin++;
        }
    }
}