/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:23:43 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/16 00:01:38 by aghounam         ###   ########.fr       */
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
    if (ac == 2 && length(argv[1]) >= 1)
    {
        std::cout << argv[1] << std::endl;
        return 1;
    }
    
    std::vector<int> vector;
    for (int i = 1; i < ac; i++)
    {
        if (check_number(argv[i]) || length(argv[i]) == 0)
        {
            std::cerr << "Wrong Arguments" << std::endl;
            return 1;
        }
        vector.push_back(std::atoi(argv[i]));
    }
    
    PmergeMe<std::vector<int> > _vec_object(vector);
    std::clock_t start_time = std::clock();
    _vec_object.process();
    std::clock_t end_time = std::clock();
    double first_container = static_cast<double>((end_time - start_time) / 1000.0);
    _vec_object.print_numbers();
    std::cout << "Time to process a range of " << _vec_object.get_size() << " elements with std::vector :" << first_container << " ms" << std::endl;

    //  deque case
    std::deque<int> deque(vector.begin(), vector.end());
    
    PmergeMe<std::deque<int> > deq_object(deque);
    std::clock_t start = std::clock();
    deq_object.process();
    std::clock_t end = std::clock();
    double second_container = static_cast<double>((end - start) / 1000.0);
    std::cout << "Time to process a range of " << deq_object.get_size() << " elements with std::deque  :" << second_container << " ms" << std::endl;
}

