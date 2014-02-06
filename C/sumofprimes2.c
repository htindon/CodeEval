/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sumofprimes2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 15:18:36 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 15:33:55 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			isprime(int n)
{

}

int			main(void)
{
	int		n;
	int		i;
	int		sumofprimes;

	n = 2;
	i = 0;
	sumofprimes = 0;
	while (i < 1000)
	{
		if (isprime(n) == 0)
		{
			i++;
			sumofprimes = sumofprimes + n;
		}
		n++;
	}
	printf("%d", sumofprimes);
	return (0);
}
