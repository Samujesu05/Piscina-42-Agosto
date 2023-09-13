/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:27:50 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/30 03:10:13 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	negcheck;
	int	i;

	num = 0;
	i = 0;
	negcheck = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			negcheck *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * negcheck);
}
