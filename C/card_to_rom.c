/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   card_to_rom.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 16:13:05 by htindon           #+#    #+#             */
/*   Updated: 2014/02/28 01:05:40 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int			match_and_replace(int number)
{
	int		value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	char	*numeral[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int		i;
	char	*result;

	i = 0;
	while (i < 13)
	{
		while (number >= value[i])
		{
			number -= value[i];
			result = strcat(result, numeral[i]);
		}
		i++;
	}
	return (0);
}
/*
   int			process(char *line)
   {

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
   while (42)
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
   */
int		main(int argc, char **argv)
{
	//	readfile(argv[1]);
	match_and_replace(5000);
	return (0);
}
