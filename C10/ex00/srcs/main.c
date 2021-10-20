/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:47:01 by byan              #+#    #+#             */
/*   Updated: 2021/10/20 15:58:53 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int	ft_print(char *path)
{
	int 	fd;
	char 	buf;

	fd = open(path, O_RDONLY);
	if (fd <= -1)
		reutnr (0);
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (1);
}

int	main(int ac, char *av[])
{
	if (ac <= 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else if (ac == 2)
	{
		if (!(ft_print(av[1])))
			write(1, "Cannot read file.\n", 18);
	}
	return (0);
}