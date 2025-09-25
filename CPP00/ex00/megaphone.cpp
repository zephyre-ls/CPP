/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:39:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/25 20:10:33 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<istream>
//cin = stdin
//count = stdout 
//
char	*check_alpha(char *str)
{
	int	i =0;
	char	result;
	while(str[i])
	{
		if (std::islower(str[i]) && std::isalpha(str[i]))
			result[j] = str[i] - 32;
		if (std::isalpha(str[i]) && std::islower(str[i]))
			result[j] = str[i] + 32;
		else
			result[j] = str[i];
		i++;
		j++;
	}
	return (result);

int	main(int argc, char **argv)
{
	int	i = 1;
	char	*str;

	if (argv[1] == '\0')
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while(i < argc)
	{
		str = check_alpha(argv[i]);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);

	/*
	int	a;
	int	b;
	int	c;
	
	std::cin >> a >> b; //cin = argv
	c = b + a;
	std::cout << c ; //cout = display 
	return 0;*/
}

//std::cpu
