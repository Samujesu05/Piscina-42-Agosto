/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:28:38 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/28 16:51:56 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;
	unsigned int	deslen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	deslen = j;
	srclen = ft_strlen(src);
	if (size == 0 || size <= deslen)
		return (srclen + size);
	while (src[i] != '\0' && i < size - deslen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (deslen + srclen);
}
