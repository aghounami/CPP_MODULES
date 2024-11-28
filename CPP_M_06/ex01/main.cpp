/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:11:53 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/28 09:53:18 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    std::string name = "ahmed";
    Data ptr ;

    ptr.a = 1;
    ptr.b = name;
    
    Data* ptr2  = &ptr;

    
    uintptr_t ptrAsInt = Serializer::serialize(ptr2);
    
    Data* SamePtr = Serializer::deserialize(ptrAsInt);

    std::cout << ptr2 << std::endl;
    std::cout << SamePtr << std::endl;
}
