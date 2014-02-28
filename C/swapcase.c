#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		swapcase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			printf("%c", *str - 32);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			printf("%c", *str + 32);
		}
		else
		{
			printf("%c", *str);
		}
		str++;
	}
	return (0);
}

int		read_file(const char *filename)
{
	FILE	*my_file;
	char	*line;
	char	*x;

	line = (char *)malloc(1000);
	my_file = fopen(filename, "r");
	while (42)
	{
		x = fgets(line, 1000, my_file);
		if (!x)
		{
			break ;
		}
		else
		{
			swapcase(line);
		}
	}
	fclose(my_file);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		read_file(argv[1]);
	}
	return (0);
}
