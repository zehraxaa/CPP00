/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:06:39 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/09 00:09:00 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout<<char(argv[i][j] - 32);
			else
			 	std::cout<<argv[i][j];
			j++;
		}
		i++;
	}
	std::cout<<std::endl;
}
