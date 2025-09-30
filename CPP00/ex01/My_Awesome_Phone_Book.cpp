/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_Awesome_Phone_Book.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:09:13 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 11:05:29 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
/*
 * Name_Space = 
/*
#Tab = mqx/8contact
#If 9 contact = remplace le plus vieux par le nouveau
#Please  note that dynamic allocation is forbidden
#3 commmandes: 
 ADD
	SEARCH
	EXIT
	Other input is ignored

	Sortie standard: cout << (redirige flux dans sortie standard)
	Entre standart: cin >>
	<< ou >> 
*/

void	add_contact(void)
{
	std::string	contact;
/*
 Tableau de contact: max 8;
 Si un 9eme est rentre il remplace le premier
 PAS DE MMALLOC,NEW! Pas d'alloc  dynamique
*/
/* Instance de classe
 * Carnet  de contact = PhoneBook
 * Contact = Contact
 * Utilise a l'interieur d'une classe = private
 * A l'exterieur d'une classe = public
 */
/* Champs du contact = 
 * 1 prenom (first name)
 * 2 Nom (last name)
 * 3 Surnom (nickname)
 * 4 phone number
 * 5 darkest secret
 * ! AUCUN CHAMPS NE PEUT ETRE VIDDE 
 */
}

void	search_contact(void)
{
/*
 * Affichage 4 colonnes :
 * 1 Index prenom nom surnom
 * Chaque colonnne = 10 caractere ded large separe par un pipe 
 * Texte alligné à droite 
 * Si texte plus long = tronque derniere caract affiche = .
 * Le programme demande à l'useur l'index a affiche 
 * Si mauvais index = erreur
 * Sinon afdffichage toutes les info ddu contact champŝ par champs sur une ligne chacun
*/
}

void	exit_phone_book(void)
{
	//Delete contact
}



int	main(int argc, char **argv)
{
	Contact	instance_contact;

	std::string command;
	std::cout << "Welcome in awesome phonebook" << std::endl;
	std::cout << "You can use this command: ADD, SEARCH, EXIT" << std::endl;
	
	while(1)
	{
		std::cin >> command;

		if (command == "ADD")
		{
			instance_contact.add_contact();
			continue;
		}
		else if (command  == "SEARCH")
		{
			continue;

		}
		else if (command == "EXIT")
		{
			exit(1);
		}
		else
		{
			continue;
		}
	}
	return(0);
}

