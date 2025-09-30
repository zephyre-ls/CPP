/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:39:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/30 11:56:10 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<istream>

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc < 2)
		return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while(i < argc)
	{
		int	j = 0;
		while(argv[i][j])
		{
			if (std::islower(argv[i][j]))
			{
				std::cout << (char)(argv[i][j] - 32); //cast en char
			}
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
