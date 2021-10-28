/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:42:33 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/28 14:56:02 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int	div;
	int	mod;

	ft_div_mod(26, 5, &div, &mod);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);

	return (0);
}
