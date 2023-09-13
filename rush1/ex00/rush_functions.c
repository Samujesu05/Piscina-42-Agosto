/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:54:02 by vnaslund          #+#    #+#             */
/*   Updated: 2023/08/27 19:16:09 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "rush_functions2.h"

char	*get_solution(int number, int lines, int *dict_n, char *dict_words[])
{
	int	i;

	i = 0;
	while (i < lines)
	{
		if (dict_n[i] == number)
		{
			return (dict_words[i]);
		}
		i++;
	}
	return ("error");
}

void	trim(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		str[j] = str[i];
		i++;
		j++;
	}
	str[j] = str[i];
	while (str[j - 1] == ' ')
		j--;
	str[j] = '\0';
}

int	get_number(int argc, char *argv[])
{
	if (argc == 2)
		return (ft_atoi(argv[1]));
	else if (argc == 3)
		return (ft_atoi(argv[2]));
	else
		return (-1);
}

char	*get_file(int argc, char *argv[])
{
	if (argc == 2)
		return ("numbers.dict");
	else if (argc == 3)
		return (argv[1]);
	else
		return (NULL);
}

int	read_lines(char *file)
{
	int		size;
	char	buff[1];
	int		fd;
	int		lines;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	lines = 0;
	size = read(fd, buff, 1);
	while (size > 0)
	{
		if (buff[0] == '\n')
			lines++;
		size = read(fd, buff, 1);
	}
	close(fd);
	return (lines);
}
