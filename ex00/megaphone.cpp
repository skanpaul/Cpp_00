/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:39:45 by ski               #+#    #+#             */
/*   Updated: 2022/06/23 12:02:09 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
/* ************************************************************************** */
int main (int argc, char **argv)
{
	int i;
	int j;
	char *str;
	
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	
	i = 1;
	while (argv[i])
	{
		str = argv[i];

		j = 0;
		while (str[j])
		{
			str[j] = toupper(str[j]);
			j++;
		}
		std::cout << str;
		i++;
	}
	
	std::cout << std::endl;

	return (0);	
}
/* ************************************************************************** */