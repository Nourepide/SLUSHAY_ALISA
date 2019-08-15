/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <Nourepide@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:52:38 by sjanie            #+#    #+#             */
/*   Updated: 2019/08/15 21:53:20 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str1, char *str2){
	char	ascii[128];
	int		i;

	while (*str1)
	{
		i = 0;
		while (str2[i])
		{
			if ((*str1 == str2[i]) && ascii[(int)str2[i]] != 1)
			{
				write(1, &(*str1), 1);
				ascii[(int)str2[i]] = 1;
			}
			i++;
		}
		str1++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
