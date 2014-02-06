/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 18:37:26 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 18:54:10 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			swap(char *line)
{
	while (*line)
	{
		if (islower(*line))
			toupper(*line);
		else if (isupper(*line))
			tolower(*line);
		printf("%s", line);
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
				swap(line);
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
