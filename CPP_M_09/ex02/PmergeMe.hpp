/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:24:09 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 01:04:37 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

class PmergeMe
{
    private :
        std::vector<int> array;
        std::vector<int> left;
        std::vector<int> right;
        int odd_flag;
    public :
        PmergeMe(std::vector<int> vector);
        void sort_arr(std::vector<int> &array);
        void merge(std::vector<int> &leftarray, std::vector<int> &rightarray, std::vector<int> &array);
        void process();
        
        
};
int check_number(std::string str);

#endif

