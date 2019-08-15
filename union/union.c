#include <unistd.h>

void	print(char *str1, char *str2){
	char	ascii[128];

	while (*str1)
	{
		if (ascii[(int)*str1] != 1)
		{
			write(1, &(*str1), 1);
			ascii[(int)*str1] = 1;
		}
		str1++;
	}

	while (*str2)
	{
		if (ascii[(int)*str2] != 1)
		{
			write(1, &(*str2), 1);
			ascii[(int)*str2] = 1;
		}
		str2++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
