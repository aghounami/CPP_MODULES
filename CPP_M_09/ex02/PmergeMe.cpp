/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:24:02 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 13:11:33 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void PmergeMe<Container>::print_numbers()
{
    unsigned int j = 0;

    std::cout << "Before: ";
    while (j < this->array.size())
        std::cout << " " << this->array[j++];
    std::cout << std::endl;

    j = 0;

    std::cout << "After:  ";
    while (j < this->right.size())
        std::cout << " " << this->right[j++];
    std::cout << std::endl;
}

int check_number(std::string str)
{
    for (unsigned int i = 0; i < str.size(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return 1;
    }
    return 0;
}

template <typename Container>
PmergeMe<Container>::PmergeMe(Container vector) : array(vector.begin(), vector.end())
{
    this->odd_flag = 0;
    if (array.size() % 2 != 0)
        this->odd_flag = 1;

    unsigned int i = 0;
    while (i < this->array.size() - this->odd_flag)
    {
        if (this->array[i] > this->array[i + 1])
        {
            this->left.push_back(this->array[i + 1]);
            this->right.push_back(this->array[i]);
        }
        else
        {
            this->left.push_back(this->array[i]);
            this->right.push_back(this->array[i + 1]);
        }
        i += 2;
    }
}

template <typename Container>
void PmergeMe<Container>::merge(Container &leftarray, Container &rightarray, Container &array)
{
    int leftsize = leftarray.size();
    int rightsize = rightarray.size();

    int i = 0, l = 0, r = 0;

    while (l < leftsize && r < rightsize)
    {
        if (leftarray[l] < rightarray[r])
        {
            array[i] = leftarray[l];
            i++;
            l++;
        }
        else
        {
            array[i] = rightarray[r];
            i++;
            r++;
        }
    }
    while (l < leftsize)
    {
        array[i] = leftarray[l];
        i++;
        l++;
    }
    while (r < rightsize)
    {
        array[i] = rightarray[r];
        i++;
        r++;
    }
}

template <typename Container>
void PmergeMe<Container>::sort_arr(Container &array)
{
    if (array.size() <= 1)
        return;

    int length = array.size();
    int mid = length / 2;

    Container left_arr(array.begin(), array.begin() + mid);
    Container right_arr(array.begin() + mid, array.end());

    sort_arr(left_arr);
    sort_arr(right_arr);

    merge(left_arr, right_arr, array);
}

template <typename Container>
void PmergeMe<Container>::process()
{
    unsigned int j = 0;

   
    sort_arr(this->right);
   

    j = 0;
    while (j < this->left.size())
    {
        typename Container::iterator it = std::lower_bound(this->right.begin(), this->right.end(), this->left[j]);
        this->right.insert(it, this->left[j]);
        j++;
    }

    if (this->odd_flag == 1)
    {
        typename Container::iterator it = std::lower_bound(this->right.begin(), this->right.end(), this->array[this->array.size() - 1]);
        this->right.insert(it, this->array[this->array.size() - 1]);
    }

    

    
}

// instantiation for vector and deque
template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;
