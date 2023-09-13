/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:00:10 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/23 21:53:13 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
	else
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
	else
		if (str[i] == '\0')
			return (1);
	else
		return (0);
	return (1);
}
