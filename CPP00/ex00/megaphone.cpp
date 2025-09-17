/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:39:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/09/17 19:53:11 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<istream>

int	main()
{
	int	a;
	int	b;
	int	c;
	
	std::cin >> a >> b; //cin = argv
	c = b + a;
	std::cout << c ; //cout = display 
	return 0;
}

//std::cpu
