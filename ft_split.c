/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:46:27 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/07 22:11:34 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int	count;
	int	i;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		 while (s[i] == c)
			 i++;
		 if (s[i] == '\0')
			 return (count);
		 while (s[i] != c && s[i] != '\0')
                         i++;
		 count++;
	}
	return(count);
}

static char	*ft_word_dup(char const *s, int start, int end)
{
	char	*arr;
	int	i;
	
	arr = malloc (end - start + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (start < end && s[start] != '\0')
	{
		arr[i] = s[start];
		start++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

void	memory_free();
static char	**ft_splited_s(char const *s, char c)
{
	char	**arr;
	char	**strs;
	int	start;
	int	l_arr;
	int	end;

	l_arr = ft_wc(s, c);
	arr = malloc((l_arr + 1) * sizeof(char *));
	strs = arr;
	if (!arr)
		return (NULL);
	end = 0;
	while (s[end] && l_arr > 0)
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != c && s[end] != '\0')
			end++;
		*arr = ft_word_dup(s, start, end);
		arr++;
	}
	*arr = NULL;
	return (strs);
}
char    **ft_split(char const *s, char c)
{

}
int main()
{
	printf("%s\n", ft_splited_s("yahya,,,,,,,,is,here,,,,,,,", ','));
}
