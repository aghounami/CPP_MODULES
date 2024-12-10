/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 23:00:53 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/11 00:18:29 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vec;

        vec.push_back(10);
        vec.push_back(11);
        vec.push_back(12);

        int occ = 11;

        std::vector<int>::iterator it = easyfind(vec, occ);
        
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------" << std::endl;
    try
    {
        std::deque<int> deq;

        deq.push_back(10);
        deq.push_back(11);
        deq.push_back(12);
        deq.push_front(9);

        int occ = 9;

        std::deque<int>::iterator it = easyfind(deq, occ);
        
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------" << std::endl;
    try
    {
        std::list<int> lst;

        lst.push_back(10);
        lst.push_back(11);
        lst.push_back(12);
        lst.push_front(14);

        int occ = 14;

        std::list<int>::iterator it = easyfind(lst, occ);
        
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
