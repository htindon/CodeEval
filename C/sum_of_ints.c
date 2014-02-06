/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 05:52:48 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 16:47:54 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int			readfile(char *filename)
{
	int		sum;
	char	*line;
	FILE	*file = NULL;

	sum = 0;
	file = fopen(filename, "r");
	if (file != NULL)
	{
		line = (char *)malloc(1000);	
		while (1)
		{
			if (fgets(line, 1000, file))
				sum = sum + atoi(line);
			else
				break ;
		}
		fclose(file);
	}
	return (sum);
}

int			main(int argc, char **argv)
{
	printf("%d", readfile(argv[1]));
	return (0);
}
