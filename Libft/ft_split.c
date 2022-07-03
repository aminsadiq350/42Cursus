/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:24 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/03 12:42:59 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //REMOVE

char	**ft_split(char const *s, char c)
{
	int		num_of_words;
	int		index;
	int		start;
	int		end;
	char	**arr_of_str;

	num_of_words = 1;
	s = ft_strtrim(s, &c); //removing c from both ends
	
	//counting the number of strings
	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			num_of_words++;
		index++;
	}
	// printf("%d", num_of_words);
	arr_of_str = (char **)malloc(sizeof(char *) * (num_of_words + 1));
	index = 0;
	end = 0;
	start = 0;
	// aabaaccbaa
	while (index < num_of_words)
	{
		while (s[end] != c && s[end] != '\0')
			end++;
		arr_of_str[index] = ft_substr(s, start, end);
		start = end + 1;
		index++;
		printf("%c\n", s[end]);
		while (s[end] == c && s[end] != '\0')
			end = end + 1;
		printf("End is: %d\n", end);

		// if (s[end] != c)
		// 		end--;

	}

	return (arr_of_str);
}
