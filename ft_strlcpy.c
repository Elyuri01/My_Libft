/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:17:51 by yelallam          #+#    #+#             */
/*   Updated: 2025/10/29 16:06:11 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = (char) src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*int main()
{
    char dst_test1[4] ;
    size_t len1 = ft_strlcpy(dst_test1, "yahya", 4);
    printf("Test 1: Return value: %zu, String: %s\n", len1, dst_test1);
    printf("Test 2: Return value: %zu\n", len1);
}*/
