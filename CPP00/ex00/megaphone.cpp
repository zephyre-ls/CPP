/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:39:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 10:37:26 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<istream>

std::string check_alpha(char *str)
{
	int	i = 0;
	std::string result;

	while(str[i])
	{
		if (std::islower(str[i]))
			result += str[i] - 32;
		else
			result += str[i];
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	std::string str;

	if (argv[1] == NULL)
		return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while(i < argc)
	{
		str = check_alpha(argv[i]);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
