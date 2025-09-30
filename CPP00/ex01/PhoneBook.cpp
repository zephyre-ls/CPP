/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:55:26 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 17:50:46 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <iomanip>

/*
 * Fonctions membres d'une obet:
 - .size()
 - .substr(pos, n)
- .erase(pos, n)
- replace(pos, len, new)
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
	int error = 0;
	if (index >= 8)
		index = 0;
	if (error = contacts[index].add_contact())
	{
		if (error == 1)
			std::cout << "\033[1mContact not add, invalid phone number detected. Enter ADD again.\033[0m" << std::endl;
		else if (error == 2)
		std::cout << "\033[1mContact not add, miss informations. Enter ADD again.\033[0m" << std::endl;
	}
	else
		index++;
}

void	PhoneBook::display_repertory(void)
{
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "\033[1m" << "           Your awesome phonebook" << "\033[0m" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m" 
	<<  std::setw(10) << std::left  <<  "Index"
	<< "|" << std::setw(10) << std::left << "FirstName"
	<< "|" << std::setw(10) << std::left << "LastName"
	<< "|" << std::setw(10) << std::left << "NickName"
	<< "\033[0m"
	<< std::endl;
	int	i = 0;
	while(i < index && i <= 8)
	{
		std::cout
		<< "\033[1m" 
		<<  std::setw(10) << std::left << i
		<< "|" << std::setw(10) << std::left << resize_display(contacts[i].first_name) 
		<< "|" << std::setw(10) << std::left << resize_display(contacts[i].last_name) 
		<< "|" << std::setw(10) << std::left << resize_display(contacts[i].nickname)
		<< "\033[0m"
		<< std::endl;
		i++;
	}
	std::cout << std::endl;
	return ;
}

void	PhoneBook::search_contact(void)
{
	std::string	i;

	if (index == 0)
	{
		std::cout << "\033[1mYour Awesome PhoneBook is empty, use ADD\033[0m" << std::endl;
		return ;
	}
	display_repertory();
	std::cout << "\033[1mEnter index for show info contact\033[0m" << std::endl;
	while(1)
	{
		std::cout << "\033[1mEnter index: \033[0m";
		std::cin >> i;
		if (!std::isdigit(i[0]) || i[0] < '0' || i[0] > '7' || i.size() != 1 ||  i[0] - '0' >= this->index)
		{
			std::cout << "\033[1mIndex not found.\033[0m"<< std::endl;
			continue;
		}
		else
		{
			contacts[i[0] - '0'].display_contact();
			return;
		}
	}
}
