/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 17:27:05 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 17:38:13 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
				printf("%s", tolower(&line));
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
