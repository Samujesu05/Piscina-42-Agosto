/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:14:38 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/22 15:20:44 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) mod (*b);
		*a = div;
		*b = mod;
	}
}
