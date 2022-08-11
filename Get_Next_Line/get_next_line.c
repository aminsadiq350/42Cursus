/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:47:48 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/08/11 16:45:21 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*get_next_line(int fd)
// {
// 	static char	schar;
// 	char		*str;
// 	char		c;
// 	int			index;

// 	str = (char *) malloc((1000 + 1) * sizeof(char));
// 	if (fd < 0 || fd >= 1024 || 1000 <= 0 || !str)
// 	{
// 		if (str)
// 			free(str);
// 		return (NULL);
// 	}

// 	ft_bzero(str, 1000);
// 	index = 0;
// 	while (read(fd, &c, 1) > 0 && c != '\n')
// 		str[index++] = c;
// 	if (c == '\n')
// 		str[index] = '\n';
// 	if (c == '\0')
// 		str[index] = '\0';
// 	schar = c;
// 	if (schar == '\0')
// 	{
// 		free(str);
// 		return (NULL);
// 	}

// 	return (str);
// }

// char	*get_next_line(int fd)
// {
// 	static char	schar;
// 	char		*str;
// 	char		c;
// 	int			index;

// 	str = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
// 	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0 || !str)
// 	{
// 		free(str);
// 		*str = '\0';
// 		return (NULL);
// 	}

// 	ft_bzero(str, (BUFFER_SIZE + 1));
// 	index = 0;
// 	while (read(fd, &c, 1) > 0 && c != '\n')
// 	{
// 		if (index > BUFFER_SIZE)
// 			str = (char *) realloc(str, ((index + 2) * sizeof(char)));
// 		str[index] = c;
// 		index++;
// 	}
// 	schar = c;
// 	if (c == '\n')
// 	{
// 		str = (char *) realloc(str, ((index + 1) * sizeof(char)));
// 		str[index] = '\n';
// 		str[++index] = '\0';
// 	}
// 	else
// 	{
// 		if (schar == '\0')
// 		{
// 			free(str);
// 			*str = '\0';
// 			return (NULL);
// 		}
// 		str = (char *) realloc(str, ((index + 1) * sizeof(char)));
// 		str[index] = '\0';
// 	}

// 	return (str);
// }

static void	cleanup(char *ptr)
{
	free(ptr);
	ptr = NULL;
}

static int	find_new_line_index(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0' && str[index] != '\n')
		index++;
	if (str[index] == '\0')
		index = -1;
	return (index);
}

char	*get_next_line(int fd)
{
	static char		*tempstr;
	char			*str;
	char			*buffer;
	int				new_line_index;
	int				new_line_check;
	static int		times_called = 0;

	times_called++;
	printf("\n\nTimes Called: %d\n\n", times_called);
	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	tempstr = (char *) ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!tempstr)
	{
		cleanup(tempstr);
		return (NULL);
	}
	new_line_check = 0;
	new_line_index = 0;
	// if (tempstr != NULL)
	// {
	// 	printf("AM HERE");
	// 	str = ft_strdup("");
	// 	str = ft_strjoin(str, tempstr);
	// 	tempstr = ft_strdup("");
	// }
	// else
		str = ft_strdup("");
	tempstr[BUFFER_SIZE] = '\0';
	printf("Static tempstr: %s !\n", tempstr);

	while (read(fd, tempstr, BUFFER_SIZE) > 0 && !new_line_check)
	{
		new_line_index = find_new_line_index(tempstr);
		// printf("tempstr: %s and new_line_index: %d\n", tempstr, new_line_index);
		if (new_line_index >= 0)
		{
			new_line_check = 1;
			buffer = ft_substr(tempstr, 0, new_line_index);
			str = ft_strjoin(str, buffer);
			tempstr = ft_substr(tempstr, new_line_index, BUFFER_SIZE);
			cleanup(buffer);
		}
		else
			str = ft_strjoin(str, tempstr);
	}
	return (str);
}
