/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:09:58 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/21 17:16:54 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        static int entry;
        int index;
    public:

        PhoneBook();
        ~PhoneBook();
        void searchContact();
        void addContact();
        void check_index();
};
#endif