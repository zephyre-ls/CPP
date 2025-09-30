/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:16 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 11:08:47 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_HPP

class PHONEBOOK {
	int	index;
	char	*first_name;
	char	*last_name;
	char	*nickname;
	Phonebook(void); //constructeur
	~Phonebook(void); //destructeur
	void	search_contact(void);
};

#endif
