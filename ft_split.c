/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelallam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:46:27 by yelallam          #+#    #+#             */
/*   Updated: 2025/11/06 10:09:55 by yelallam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	//treat delimiters only, and  whitespaces if found in s and are not specified as delimiters then they are treated as normal characters in the word string
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

//use a simple function to duplicate the splitted array from the wanted start and finish index
static char	*ft_word_dup(char const *s, char c, int start, int end)
{
	//here lets implement a simple word  dup while allocating the size of each splitted string
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

	l_arr = ft_wc(s, c);
	arr = malloc((l_arr + 1) * sizeof(char *));
	i = 0;
	start = 0;
	//use ft_word_dup to duplicate into our 2d array each splitted string and split the strings in this functions and use ft_word_dup each time we find a word
	while (s[i])
	{
		while (s[])
		//in this loop we split the character and once we find a new word we use ft_word_dup to duplicate it and then we put it in our 2d array index by index
	}
}
char    **ft_split(char const *s, char c)
{
	if (!arr)
	{
		return (NULL);
	}
}
/*int main()
{
	printf("%d\n", ft_wc(",,,,,,,,      yahya,,,,,,,,is,here,,,,,,,", ','));
}*/
