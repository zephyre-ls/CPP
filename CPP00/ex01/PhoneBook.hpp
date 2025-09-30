/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:16 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 17:19:23 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

/*
Public / Private = Specificateurs d'accés dans une classe.
Definissent qui peut accéder aux variables(attributs) ou fonctions(methodes)
_ Private: Acces que depuis la classe elle même, evite modif accidentell, control accés
_ Public : Utilisable depuis n'importe ou
*/

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
