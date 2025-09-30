/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:16 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 14:07:39 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact_class.hpp"

class PhoneBook {
	private:
	Contact contacts[8];
	int	i;
	int	total_contacts;

	public:
	int	index;

	PhoneBook(void); //constructeur
	~PhoneBook(void); //destructeur

	void	add_contacts(void);
	void	search_contact(void);
	void	display_repertory(void);
	std::string resize_display(std::string info);
};

#endif
