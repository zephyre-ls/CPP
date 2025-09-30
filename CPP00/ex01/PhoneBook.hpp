/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:16 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 15:42:22 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
	private:
	Contact contacts[8];
	int	i;
	int	index;
	void	display_repertory(void);
	std::string resize_display(std::string info);

	public:
	PhoneBook(void); //constructeur
	~PhoneBook(void); //destructeur

	void	add_contacts(void);
	void	search_contact(void);
};

#endif
