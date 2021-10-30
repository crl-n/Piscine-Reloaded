/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:47:26 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/30 12:25:45 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_err(char *str);

void	ft_read(int fd)
{
	char	buf[1];

	while (read(fd, buf, 1) > 0)
	{
		write(1, buf, 1);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		ft_read(fd);
		close(fd);
	}
	else if (argc > 2)
	{
		ft_putstr_err("Too many arguments.\n");
		return (0);
	}
	else
		ft_putstr_err("File name missing.\n");
	return (0);
}
