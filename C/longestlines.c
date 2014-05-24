#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int			main(int argc, char **argv)
{
	//	int		n;
	FILE	*f;
	char	*line;
	char	*tab[2];
	size_t	linecap = 0;
	ssize_t	linelen;

	if (argc > 1)
	{
		//		n = 0;
		line = (char *)malloc(sizeof(char) * 1024);
		f = fopen(argv[1], "r");
		tab[0] = "\0";
		tab[1] = "\0";
		// Store first line in variable 'n'
		//		n = atoi(fgets(line, 1024, f));
		while ((linelen = getline(&line, &linecap, f)) > 0) 
		{
			if (strlen(tab[0]) < strlen(line))
			{
				tab[1] = tab[0];
				tab[0] = line;
			}
			else if (strlen(tab[1]) < strlen(line))
			{
				tab[1] = line;
			}
			printf("%s", tab[1]);
		}
		printf("%s%s", tab[0], tab[1]);
	}
	return (0);
}
