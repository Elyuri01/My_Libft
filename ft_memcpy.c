/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:15:56 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/01 18:32:03 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dst;
	unsigned const char	*p_src;
	size_t				i;

	p_dst = dest;
	p_src = src;
	i = 0;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	int	x;
	const int	xx = 33;
	ft_memcpy(&x, &xx, 2);
	printf("%d", x);
}*/
