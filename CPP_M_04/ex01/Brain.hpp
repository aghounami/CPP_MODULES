/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:05:52 by aghounam          #+#    #+#             */
/*   Updated: 2024/11/08 12:29:46 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
};
#endif
