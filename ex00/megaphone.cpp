/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:30:54 by aschmidt          #+#    #+#             */
/*   Updated: 2024/11/19 13:51:10 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*capitalize(char *str)
{
	for (int j = 0; str[j]; j++)
	{
		str[j] = toupper(str[j]);
	}
	return (str);
}

int main(int argc, char *argv[])
{
	char	*capitalized;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			capitalized = capitalize(argv[i]);
			std::cout << capitalized;
			if (argc > 2)
				std::cout << " ";
		}
	}
	std::cout << "\n";
	return (0);
}
