/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:24:02 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/15 01:04:20 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int check_number(std::string str)
{
    for(unsigned int i = 0; i < str.size(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return 1;
    }
    return 0;
}

PmergeMe::PmergeMe(std::vector<int> vector) : array(vector)
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

void PmergeMe::merge(std::vector<int> &leftarray, std::vector<int> &rightarray, std::vector<int> &array)
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

void PmergeMe::sort_arr(std::vector<int> &array)
{
	if (array.size() <= 1)
		return;

	int length = array.size();
	int mid = length / 2;

	std::vector<int> left_arr(array.begin(), array.begin() + mid);
	std::vector<int> right_arr(array.begin() + mid, array.end());

	sort_arr(left_arr);
	sort_arr(right_arr);

	merge(left_arr, right_arr, array);
}

void PmergeMe::process()
{

	unsigned int j = 0;

	sort_arr(this->right);
	std::cout << "----------------------" << std::endl;
	j = 0;
	while (j < this->left.size())
	{
		std::vector<int>::iterator it = std::lower_bound(this->right.begin(), this->right.end(), this->left[j]);
		this->right.insert(it, this->left[j]);
		j++;
	}
	if (this->odd_flag == 1)
	{
		std::vector<int>::iterator it = std::lower_bound(this->right.begin(), this->right.end(), this->array[this->array.size() - 1]);
		this->right.insert(it, this->array[this->array.size() - 1]);
	}
	j = 0;

	while (j < this->right.size())
		std::cout << this->right[j++] << std::endl;
}