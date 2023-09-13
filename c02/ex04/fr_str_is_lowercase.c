/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:14:30 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/23 22:23:32 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
	else
		if (str[i] == '\0')
			return (1);
	else
		return (0);
	return (1);
}
