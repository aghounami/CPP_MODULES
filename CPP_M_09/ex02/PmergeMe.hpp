/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:24:09 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 12:50:32 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include <ctime>
#include <iomanip>

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
    void sort_arr(Container &array);
    void merge(Container &leftarray, Container &rightarray, Container &array);
    void process();
    void print_numbers();
    unsigned int get_size() {
        return this->array.size();
    }
};

int check_number(std::string str);

#endif

