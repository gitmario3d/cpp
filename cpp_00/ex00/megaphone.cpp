/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:51:54 by malena-b          #+#    #+#             */
/*   Updated: 2024/12/03 13:18:40 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{		
		for (int i = 1; i < argc; i++)
		{
			for(size_t j = 0; j < strlen(argv[i]); j++)
			{
				if (islower(argv[i][j]))
					argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
		}
	}
	std::cout << std::endl;
}