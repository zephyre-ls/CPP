/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:55:26 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 14:27:53 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook_class.hpp"
#include "Contact_class.hpp"
#include <cctype>

/*
 * Fonctions membres d'une obet:
 - .size()
 - .substr(pos, n)
- .erase(pos, n)
https://perso.isima.fr/loic/cpp/string.fr.php
*/
//this-> (this  est un pointeur) si je veux modifier une variable this->nom_variable.
//this-> fonction.
PhoneBook::PhoneBook(void) //construction, ou j'initialise mes variable
{
	index = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

std::string PhoneBook::resize_display(std::string info)
{
	if (info.size() > 9)
	{
		int len = info.size();
		info.erase(9, len);
		info.replace(9, 1, ".");
	}
	return  (info);
}

void	PhoneBook::add_contacts(void)
{
	if (index >= 8)
		index = 0;
	contacts[index].add_contact();
	index++;
}

void	PhoneBook::display_repertory(void)
{
	std::cout << "Phone Book" << std::endl;
	std::cout << "Index    |FirstName |LastName  |Nickame   ";
	std::cout << std::endl;
	int	i = 0;
	while(i < index && i <= 8)
	{
		std::cout << i << "       |" << resize_display(contacts[i].first_name) << "|" << resize_display(contacts[i].last_name) << "|" << resize_display(contacts[i].nickname) << std::endl;
		i++;
	}
	return ;
}

void	PhoneBook::search_contact(void)
{
	std::string	i;

	if (index == 0)
	{
		std::cout << "Your Awesome PhoneBook is empty, use ADD" << std::endl;
		return ;
	}
	display_repertory();
	std::cout << "Enter and index for show info contact" << std::endl;
	while(1)
	{
		std::cin >> i;
		if (!std::isdigit(i[0]) || i[0] < '0' || i[0] > '7' || i.size() != 1 ||  i[0] - '0' >= this->index)
		{
			std::cout << "Index not found" << std::endl;
			continue;
		}
		else
		{
			contacts[i[0] - '0'].display_contact();
			return;
		}
	}
}
