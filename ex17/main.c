/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:30:47 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/28 20:36:15 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "Hello.";
	char s2[] = "Hallo.";

	printf("%d\n", ft_strcmp(&s1, &s2));
	return (0);
}