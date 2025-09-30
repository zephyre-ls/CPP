/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:52:05 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 17:43:28 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact {
	public :
	
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest;
	
	Contact(void); //constructeur
	~Contact(void); //destructeur
	
	int		add_contact(void); //fonction membre
	void	display_contact(void);
	int		check_error(int error);
	void	clear_contacts(void);
};

#endif
