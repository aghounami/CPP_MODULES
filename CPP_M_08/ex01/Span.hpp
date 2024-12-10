/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:36:41 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/11 00:33:45 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
#define SPAN

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> vec;

public:
    Span();
    Span(unsigned int max);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(int number);
    void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};

#endif