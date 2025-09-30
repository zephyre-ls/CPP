/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:00:57 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 14:07:02 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact_class.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}



void	Contact::display_contact(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest: " << this->darkest << std::endl;
	std::cout << std::endl;
	return;
}

void	Contact::add_contact(void)
{
	std::cout << "First name?" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Last name?" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Nickname?" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Phone number?" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Darkset secret?" << std::endl;
	std::cin >> this->darkest;
	std::cout << "Contact created." << std::endl;
	std::cout << std::endl;
	return;
}
