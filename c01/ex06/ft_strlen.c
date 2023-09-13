/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:21:15 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/22 15:39:26 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(char *str)
{
    int counter;
    counter = 0;
    
    while (*str != '\0')
        {
        counter++;
        str++;
        }
    return counter;
}