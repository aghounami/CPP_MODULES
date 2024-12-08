/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:13:42 by aghounam          #+#    #+#             */
/*   Updated: 2024/12/06 23:40:35 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
    Base *derived = generate();
    identify(derived);

    Base &reference = *derived;
    identify(reference);

    delete derived;
}
