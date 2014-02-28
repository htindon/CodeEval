/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 23:18:11 by htindon           #+#    #+#             */
/*   Updated: 2014/02/28 23:41:54 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int			to_lower(char *line)
{
	while (*line)
	{
		if (isupper(*line))
			printf("%c", tolower(*line));
		else
			printf("%c", *line);
		line++;
	}
	return (0);
}

int			readfile(char *filename)
{
	char	*line;
	FILE	*file = NULL;

	file = fopen(filename, "r");
	if (file != NULL)
	{
		line = (char *)malloc(1024);
		while (1)
		{
			if (fgets(line, 1024, file))
				to_lower(line);
			else
				break ;
		}
		fclose(file);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	readfile(argv[1]);
	return (0);
}
