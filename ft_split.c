/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:46:27 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/07 15:51:54 by yelallam         ###   ########.fr       */
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

static char	**ft_splited_s(char const *s, char c)
{
	char	**arr;
	int	i;
	int	start;
	int	l_arr;
	int	end;

	l_arr = ft_wc(s, c);
	arr = malloc((l_arr + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	end = 0;
	while (s[end] && i < l_arr)
	{
		start = end;
		while (s[end] == c && s[end] != '\0')
		{
			start++;
			end++;
		}
		while (s[end] != c && s[end] !=  '\0')
			end++;
		arr[i] = ft_word_dup(s, start,  end);
		i++;
	}
	return (arr);
}
char    **ft_split(char const *s, char c)
{

}
int main()
{
	printf("%d\n", ft_splitted_s(",,,,,,,,      yahya,,,,,,,,is,here,,,,,,,", ','));
}
