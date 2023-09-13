/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:32:16 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/23 22:33:06 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printeable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 32 && str[i] <= 126)
			i++;
	else
		if (str[i] == '\0')
			return (1);
	else
		return (0);
	return (1);
}
