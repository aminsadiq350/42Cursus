// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/06/14 18:11:24 by aminsadiq         #+#    #+#             */
// /*   Updated: 2022/07/03 12:42:59 by aminsadiq        ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h> //REMOVE

// char	**ft_split(char const *s, char c)
// {
// 	int		num_of_words;
// 	int		index;
// 	int		start;
// 	int		end;
// 	char	**arr_of_str;

// 	num_of_words = 1;
// 	s = ft_strtrim(s, &c); //removing c from both ends
	
// 	//counting the number of strings
// 	index = 0;
// 	while (s[index])
// 	{
// 		if (s[index] == c)
// 			num_of_words++;
// 		index++;
// 	}
// 	// printf("%d", num_of_words);
// 	arr_of_str = (char **)malloc(sizeof(char *) * (num_of_words + 1));
// 	index = 0;
// 	end = 0;
// 	start = 0;
// 	// aabaaccbaa
// 	while (index < num_of_words)
// 	{
// 		while (s[end] != c && s[end] != '\0')
// 			end++;
// 		arr_of_str[index] = ft_substr(s, start, end);
// 		start = end + 1;
// 		index++;
// 		printf("%c\n", s[end]);
// 		while (s[end] == c && s[end] != '\0')
// 			end = end + 1;
// 		printf("End is: %d\n", end);

// 		// if (s[end] != c)
// 		// 		end--;

// 	}

// 	return (arr_of_str);
// }


#include "libft.h"

static size_t   sup_str_len(const char *s, char c);

static size_t   count_sup_str(const char *s, char c);

char    **ft_split(const char *s, char c)
{
    char    **full_str;
    size_t  sup_str_number;
    size_t  n;

    n = 0;
    sup_str_number = count_sup_str(s, c);
    full_str = (char **)malloc(sizeof(*full_str) * (count_sup_str(s, c) + 1));
    if (!full_str)
        return (NULL);
    while (sup_str_number)
    {
        while (*s == c && *s != '\0')
            s++;
        full_str[n] = ft_substr(s, 0, sup_str_len(s, c));
        if (full_str[n] == NULL)
            return (NULL);
        s = s + sup_str_len(s, c);
        n++;
        sup_str_number--;
    }
    full_str[n] = NULL;
    return (full_str);
}

static size_t   count_sup_str(const char *s, char c)
{
    size_t      sub_str_num;
    size_t      is_char_c;

    is_char_c = 0;
    sub_str_num = 0;
    while (*s != '\0')
    {
        if (is_char_c == 1 && *s == c)
            is_char_c = 0;
        if (is_char_c == 0 && *s != c)
        {
            is_char_c = 1;
            sub_str_num++;
        }
        s++;
    }
    return (sub_str_num);
}

static size_t   sup_str_len(const char *s, char c)
{
    size_t      len;

    len = 0;
    while (*s != c && *s)
    {
        len++;
        s++;
    }
    return (len);
}