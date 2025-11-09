/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:15:22 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/09 15:54:38 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_fill_wd(char *arr, char const *s,
				unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] && i < len)
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	l_s;

	if (!s)
		return (NULL);
	i = 0;
	l_s = ft_strlen(s);
	if (start > l_s)
	{
		arr = malloc(1);
		if (!arr)
			return (NULL);
		arr[i] = '\0';
		return (arr);
	}
	if (len > l_s - start)
		arr = malloc(l_s - start + 1);
	else
		arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	return (ft_fill_wd(arr, s, start, len));
}
