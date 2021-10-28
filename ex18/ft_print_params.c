/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:38:36 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/28 20:56:16 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = argc - 1;
	while (i >= 1)
	{
		str = argv[i--];
		while (*str)
			ft_putchar(*str++);
		ft_putchar('\n');
	}
	return (0);
}
