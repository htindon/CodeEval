/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sumofprimes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 08:53:22 by htindon           #+#    #+#             */
/*   Updated: 2014/02/05 09:13:38 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 * Write a program to determine the sum of the first 1000 prime numbers.
 *
 * Steps :
 * - initiate a loop with a counter in a condition
 * - define if a given number is prime or not
 * - if the number is prime the counter is incremented
 */

int			isprime(int n)
	/* 
	 * A number n is prime if it can only be divided by itself and by 1
	 * In other words I have to divide n by every number between 1 not included
	 * and number not included to see if there is a remainder. If there is one
	 * I stop the program : n is not prime. Else n is prime.
	 */
{
	int		i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (-1);
		i++;
	}
	return (0);
}

int			main(void)
{
	int		i;
	int		n;
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
