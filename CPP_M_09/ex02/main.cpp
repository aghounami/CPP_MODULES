/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:23:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 13:11:55 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char *argv[])
{
    if (ac < 2)
    {
        std::cerr << "Wrong Arguments" << std::endl;
        return 1;
    }
    if (ac == 2)
    {
        std::cout << argv[1] << std::endl;
        return 1;
    }
    
    std::vector<int> vector;
    for (int i = 1; i < ac; i++)
    {
        if(check_number(argv[i]))
        {
            std::cerr << "Wrong Arguments" << std::endl;
            return 1;
        }
        vector.push_back(std::atoi(argv[i]));
    }
    // std::deque<int> deque(vector.begin(), vector.end());
    
    PmergeMe<std::vector<int> > _vec_object(vector);
    std::clock_t start_time = std::clock();
    _vec_object.process();
    std::clock_t end_time = std::clock();
    double first_container = static_cast<double>((end_time - start_time) / 1000.0);
    _vec_object.print_numbers();
    std::cout << std::fixed << std::setprecision(5) << "Time to process a range of " << _vec_object.get_size() << " elements with std::vector :" << first_container << " us" << std::endl;

    //  deque case
    PmergeMe<std::deque<int> > deq_object(deque);
    std::clock_t start = std::clock();
    deq_object.process();
    std::clock_t end = std::clock();
    double second_container = static_cast<double>((end - start) / 1000.0);
    // deq_object.print_numbers();
    std::cout << std::fixed << std::setprecision(5) << "Time to process a range of " << deq_object.get_size() << " elements with std::deque  :" << second_container << " us" << std::endl;
}

