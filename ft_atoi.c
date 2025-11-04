/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:01:56 by yelallam          #+#    #+#             */
/*   Updated: 2025/10/31 19:39:29 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	c;
	int	sign;

	i = 0;
	c = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr [i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		c = c * 10 + nptr[i] - '0';
		i++;
	}
	return (c * sign);
}
/*int main()
{
	printf("%d\n", ft_atoi("    \n+12hgl"));
}*/
