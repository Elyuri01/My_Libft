/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:00:22 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/10 13:07:03 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_setfound(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

static char	*ft_fillstr(char *str, char const *s1, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	int i, (start), (end);
	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_setfound(s1[i], set))
		i++;
	if (s1[i] == '\0')
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	start = i;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_setfound(s1[i], set))
		i--;
	end = i;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	return (ft_fillstr(str, s1, start, end));
}
