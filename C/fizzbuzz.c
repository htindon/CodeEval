/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 05:52:48 by htindon           #+#    #+#             */
/*   Updated: 2014/02/28 00:31:29 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int			output(int first, int second, int end)
{
	int		i;

	i = 1;
	while (i < end)
	{
		check(i, first, second);
		printf(" ");
		i++;
	}
	check(i, first, second);
	printf("\n");
	return (0);
}

int			process(char *line)
{
	int		first;
	int		second;
	int		end;

	first = 0;
	second = 0;
	end = 0;
	first = atoi(line);
	while (*line != ' ')
		line++;
	line++;
	second = atoi(line);
	while (*line != ' ')
		line++;
	line++;
	end = atoi(line);
	output(first, second, end);
	return (0);
}

int			readfile(char *filename)
{
	char	*line;
	FILE	*file = NULL;

	file = fopen(filename, "r");
	if (file != NULL)
	{
		line = (char *)malloc(1000);	
		while (1)
		{
			if (fgets(line, 1000, file))
				process(line);
			else
				break ;
		}
		fclose(file);
	}
	return (0);
}

int			check(int i, int first, int second)
{
	if (i % first == 0 && i % second == 0)
		printf("FB");
	else if (i % first == 0)
		printf("F");
	else if (i % second == 0)
		printf("B");
	else
		printf("%d", i);
	return (0);
}

int			main(int argc, char **argv)
{
	readfile(argv[1]);
	return (0);
}
