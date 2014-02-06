/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   card_to_rom.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 16:13:05 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 16:34:07 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int			tens(int number)
{
	if (number < 5)
	{

	}
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
				process(line);
			else
				break ;
		}
		fclose(file);
	}
	return (0);
}

int		process(char *line)
{
	return (0);
}

int		main(int argc, char **argv)
{
	readfile(argv[1]);
	return (0);
}
