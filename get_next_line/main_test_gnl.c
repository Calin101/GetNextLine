/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 17:22:26 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/11/05 15:38:07 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

/*int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
	}
	else
		return (2);
	ft_putstr("\033[34m\033[4mLecture ficher seul :\033[0m\n\n");
	while (get_next_line(fd, &line) > 0)
	{
		ft_putendl(line);
		free(line);
	}
	ft_putstr("\033[32m\033[1mFin de lecture !\033[0m\n");
	if (argc == 2)
		close(fd);
}*/

int		main(int argc, char **argv)
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*line;

	if (argc == 4)
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		fd3 = open(argv[3], O_RDONLY);
	}
	else
		return (2);
	ft_putstr("\033[34m\033[4mLecture premier ficher :\033[0m\n\n");
	while (get_next_line(fd1, &line) > 0)
	{
		ft_putendl(line);
		free(line);
	}
	ft_putstr("\033[34m\033[4mLecture deuxieme ficher :\033[0m\n\n");
	while (get_next_line(fd2, &line) > 0)
	{
		ft_putendl(line);
		free(line);
	}
	ft_putstr("\033[34m\033[4mLecture troisieme ficher :\033[0m\n\n");
	while (get_next_line(fd3, &line) > 0)
	{
		ft_putendl(line);
		free(line);
	}
	ft_putstr("\033[32m\033[1mFin de lecture !\033[0m\n");
	if (argc == 4)
	{
		close(fd1);
		close(fd2);
		close(fd3);
	}
}