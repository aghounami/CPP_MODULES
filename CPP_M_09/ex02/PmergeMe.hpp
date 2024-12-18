/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:24:09 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/17 15:03:19 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

template <typename Container>
class PmergeMe
{
private:
    Container array;
    Container left;
    Container right;
    int odd_flag;

public:
    PmergeMe(Container vector);

    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();

    void sort_arr(Container &array);
    void merge(Container &leftarray, Container &rightarray, Container &array);
    void process();
    void print_numbers();
    unsigned int get_size();
};

int check_number(std::string str);
unsigned int length(std::string str);

#endif
