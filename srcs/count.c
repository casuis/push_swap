/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:46:46 by asimon            #+#    #+#             */
/*   Updated: 2021/11/21 17:03:50 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	ft_count_arg(char *str)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	if (ft_isdigit(str[0]))
		ret++;
	while (str[i] != 0)
	{
		if ((str[i] == ' ' && ft_isdigit(str[i + 1]))
			|| (str[i] == '-' && ft_isdigit(str[i + 1])))
			ret++;
		if (str[i] != '-' && str[i] != ' ' && !ft_isdigit(str[i]))
			return (-1);
		i++;
	}
	return (ret);
}

int	ft_count_char(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0 && str[i] != ' ' && ft_isdigit(str[i]))
		i++;
	return (i);
}
