/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:16 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 11:22:48 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class PhoneBook {
	public:

	int	index;
	char	*first_name;
	char	*last_name;
	char	*nickname;

	PhoneBook(void); //constructeur
	~PhoneBook(void); //destructeur
	
	void	search_contact(void);
};

#endif
