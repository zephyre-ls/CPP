/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:00:57 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 17:03:43 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::display_contact(void)
{
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "\033[1m" << "                 Contact" << "\033[0m" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "\033[1mFirst name: \033[0m"<< this->first_name << std::endl;
	std::cout <<  "\033[1mLast name: \033[0m" << this->last_name << std::endl;
	std::cout << "\033[1mNickname: \033[0m" << this->nickname << std::endl;
	std::cout << "\033[1mPhone number: \033[0m" << this->phone_number << std::endl;
	std::cout << "\033[1mDarkest secret: \033[0m" << this->darkest << std::endl;
	std::cout << std::endl;
	return;
}

static int	is_space_or_tab(std::string info)
{
	int	i = 0;
	if (info.empty())
		return(1);
	while(i < info.size())
	{
		if (info[i] != ' ' && info[i] != '\t' && info[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	Contact::add_contact(void)
{
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "\033[1m" << "              Add new contact" << "\033[0m" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1mFirst name?\033[0m" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "\033[1mLast name?\033[0m" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "\033[1mNickname?\033[0m" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "\033[1mPhone number? (only number)\033[0m" << std::endl;
	std::getline(std::cin, this->phone_number);
	int i = 0;
	while(this->phone_number[i])
	{
		if (!isdigit(this->phone_number[i]))
		{
			this->first_name.erase();
			this->last_name.erase();
			this->nickname.erase();
			return (1);
		}
		i++;
	}
	std::cout << "\033[1mDarkest secret?\033[0m" << std::endl;
	std::getline(std::cin, this->darkest);
	if (is_space_or_tab(this->first_name)|| is_space_or_tab(this->last_name)
			|| is_space_or_tab(this->nickname) || is_space_or_tab(this->phone_number)
			|| is_space_or_tab(this->darkest))
	{
		this->first_name.erase();
		this->last_name.erase();
		this->nickname.erase();
		this->phone_number.erase();
		this->darkest.erase();
		return(2);
	}
	std::cout << "\033[1mContact created !\033[0m" << std::endl;
	std::cout << std::endl;
	return (0);
}
