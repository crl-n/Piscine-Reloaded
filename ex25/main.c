/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:08:55 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/29 14:26:08 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void	ft_print(int nb)
{
	printf("%d\n", nb);
}

int	main(void)
{
	int	*arr;

	arr = malloc(3 * sizeof (int));
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	ft_foreach(arr, 3, ft_print);
	return (0);
}
