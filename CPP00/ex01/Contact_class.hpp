/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:52:05 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 11:03:54 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {

	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone_number;
	char	*darkest;
	Contact(void); //constructeur
	~Contact(void); //destructeur
	void	add_contact(void); //fonction membre
};

#endif
