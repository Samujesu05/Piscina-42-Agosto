/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:25:00 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/23 22:25:33 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
	else
		if (str[i] == '\0')
			return (1);
	else
		return (0);
	return (1);
}
