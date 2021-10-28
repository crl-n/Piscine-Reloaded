/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:04:00 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/28 17:22:45 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("25: %d\n", ft_sqrt(25));
	printf("0: %d\n", ft_sqrt(0));
	printf("1: %d\n", ft_sqrt(1));
	printf("5: %d\n", ft_sqrt(5));
	printf("9: %d\n", ft_sqrt(9));
	printf("2: %d\n", ft_sqrt(2));
	printf("16: %d\n", ft_sqrt(16));

	return (0);
}
