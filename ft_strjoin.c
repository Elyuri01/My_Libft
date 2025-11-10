/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:12:56 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/09 18:58:43 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;

	size_t l_s1, (l_s2), (i), (j);
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	arr = malloc(l_s1 + l_s2 + 1);
	if (!arr)
		return (NULL);
	j = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
