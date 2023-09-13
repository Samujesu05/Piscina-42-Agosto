/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:28:05 by eliegarc          #+#    #+#             */
/*   Updated: 2023/08/27 19:28:09 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush_functions.h"
#include "rush_functions2.h"

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &(str[i]), 1);
		i++;
	}
	write(1, "\n", 1);
}

void	split(char *str, int *n, char *w)
{
	char	number[100];
	int		i;
	int		j;

	i = 0;
	while (str[i] != ':')
	{
		number[i] = str[i];
		i++;
	}
	number[i] = '\0';
	trim(number);
	*n = ft_atoi(number);
	i++;
	j = 0;
	while (str[i] != '\0')
	{
		w[j] = str[i];
		i++;
		j++;
	}
	w[j] = '\0';
	trim(w);
}

int	load_dict(char *file, int *dict_numbers, char *dict_words[])
{
	char	buff[1];
	char	cad[512];
	int		fd;
	int		i;
	int		lines;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	i = 0;
	lines = 0;
	while (read(fd, buff, 1) > 0)
	{
		if (buff[0] == '\n')
		{
			cad[i] = '\0';
			split(cad, &(dict_numbers[lines]), &(dict_words[lines][0]));
			i = 0;
			lines++;
		}
		else
			cad[i++] = buff[0];
	}
	close(fd);
	return (lines);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		lines;
	int		*dict_n;
	char	**dict_w;

	lines = read_lines(get_file(argc, argv));
	dict_n = malloc(lines * sizeof(int));
	dict_w = malloc(lines * sizeof(char *));
	i = 0;
	while (i < lines)
		dict_w[i++] = malloc(512 * sizeof(char));
	load_dict(get_file(argc, argv), dict_n, dict_w);
	print(get_solution(get_number(argc, argv), lines, dict_n, dict_w));
}
