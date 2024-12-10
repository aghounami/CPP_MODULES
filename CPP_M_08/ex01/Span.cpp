/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:36:42 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/11 00:33:38 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned int max) : N(max)
{
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->vec = other.vec;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if (vec.size() < N)
        vec.push_back(number);
    else
        throw std::out_of_range("out of range");
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    int distance = std::distance(start, end);
    if ((distance + vec.size()) > N)
        throw std::range_error("out of range");
    vec.insert(vec.end(), start, end);
}

int Span::longestSpan()
{

    if (this->vec.size() < 2)
        throw std::range_error("No enough numbers in the span");
    std::vector<int> copy = this->vec;
    std::sort(copy.begin(), copy.end());
    return (copy[copy.size() - 1] - *copy.begin());
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw std::range_error("No enough numbers in the span");
    std::vector<int> copy = this->vec;
    std::sort(copy.begin(), copy.end());
    int shortdis = INT_MAX;
    for (size_t i = 0; i < copy.size(); i++)
    {
        if (copy[i + 1] && copy[i + 1] - copy[i] <= shortdis)
            shortdis = copy[i + 1] - copy[i];
    }
    return (shortdis);
}
