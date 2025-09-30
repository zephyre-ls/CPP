/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:09:13 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 17:49:03 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include<iostream>

/*
 * Name_Space = ?
	Sortie standard: cout << (redirige flux dans sortie standard)
	Entre standart: cin >>
	<< ou >> 
*/

int	main(int argc, char **argv)
{
	PhoneBook		instance_phonebook;
	std::string command;

	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "\033[1m" << "           Welcome in awesome phonebook" << "\033[0m" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Your Phone Book is empty." << std::endl;
	std::cout << "You can use the following command: " << "\033[1mADD\033[0m, " << "\033[1mSEARCH\033[0m, " << "\033[1mEXIT\033[0m" << std::endl;
	std::cout << "\033[1mADD\033[0m: Add new contact" << std::endl;
	std::cout << "\033[1mSEARCH\033[0m: Search and view contact" << std::endl;
	std::cout << "\033[1mEXIT\033[0m: Quit program and delete your awesome phonebook" << std::endl;
	std::cout << std::endl;

	while(1)
	{
		std::cout << "\033[1mEnter command: \033[0m";
		std::cin >> command;
		
		std::cin.ignore(); //sans ce sin.ignore automatiquement garde dans le buffer le /n et saute first_name
		if (command == "ADD")
		{
			instance_phonebook.add_contacts();
			continue;
		}
		else if (command  == "SEARCH")
		{
			instance_phonebook.search_contact();
			continue;
		}
		else if (command == "EXIT")
		{
			std::cout << "\033[1mYour phonebook is deleted.\033[0m" << std::endl;
			exit(1);
		}
		else
		{
			std::cout << "\033[1mEnter ADD, SEARCH or EXIT.\033[0m" << std::endl;
			continue;
		}
	}
	return(0);
}

