/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/02 13:34:31 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/14 11:38:51 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_lastindex4(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i != 20)
	{
		ft_putendl("\033[31m[error]\033[0m");
		return (0);
	}
	return (1);
}
