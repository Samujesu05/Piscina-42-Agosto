/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:54:02 by vnaslund          #+#    #+#             */
/*   Updated: 2023/08/27 19:03:49 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_FUNCTIONS_H
# define RUSH_FUNCTIONS_H

char	*get_solution(int number, int lines, int *dict_n, char *dict_words[]);
void	trim(char *str);
int		get_number(int argc, char *argv[]);
char	*get_file(int argc, char *argv[]);
int		read_lines(char *file);

#endif
