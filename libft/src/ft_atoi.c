/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:53:47 by asimon            #+#    #+#             */
/*   Updated: 2025/01/25 20:54:41 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../../incl/push_swap.h"

/**
 * @brief Convert a string into a long long int
 * 
 * @param str 
 * @return long long int 
 */
long long int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long long int	ret;

	ret = 0;
	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (ret * neg);
}
