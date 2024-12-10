/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:53:40 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/08 18:19:37 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
#define ARRAY

#include <iostream>

// Template Instantiation

template <typename T>
class Array
{
private:
    T *elements;
    unsigned int Size;

public:
    Array() : elements(NULL), Size(0) {}
    Array(unsigned int n) : elements(new T[n]), Size(n)
    {
        for (unsigned int i = 0; i < Size; i++)
            elements[i] = T();
    }
    Array(const Array &other) : elements(new T[other.Size]), Size(other.Size)
    {
        for (unsigned int i = 0; i < other.Size; i++)
            this->elements[i] = other.elements[i];
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] this->elements;
            this->elements = new T[other.Size];
            for (unsigned int i = 0; i < other.Size; i++)
                this->elements[i] = other.elements[i];
            this->Size = other.Size;
        }
        return *this;
    }
    T& operator[](unsigned int index)
    {
        if (index >= Size) {
            throw std::out_of_range("Index out of range");
        }
        return elements[index];
    }
    
    unsigned int size() const
    {
        return (this->Size);
    }

    ~Array(){
        delete[] this->elements;
    }
};

#endif