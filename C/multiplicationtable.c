/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplicationtable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 15:35:39 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 16:11:55 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int i = 1;
	int j = 1;

	while (j <= 12)
	{
		printf("%d", i * j);
		i++;
		while (i <= 12)
		{		
			if ((i * j) >= 10)
				printf("  ");
			else if ((i * j) >= 100)
				printf(" ");
			else
				printf("   ");
			printf("%d", i * j);
			i++;
		}
		printf("\n");
		i = 1;
		j++;
	}
	return (0);
}
