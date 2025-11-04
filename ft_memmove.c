/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:21:45 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/01 19:27:36 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dst;
	unsigned const char	*p_src;
	size_t				i;

	i = 0;
	p_dst = dest;
	p_src = src;
	if (p_dst > p_src)
	{
		while (n-- > i)
		{
			p_dst[n] = p_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dest);
}
/*int	main()
{
	char dst[] = "yahya";
	char const dt[] = "elallam";
	ft_memmove(dst, dt, 6);
	printf("%s", dst);
}*/
