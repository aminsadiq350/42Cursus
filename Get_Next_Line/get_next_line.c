/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:47:48 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/08/15 11:57:28 by aminsadiq        ###   ########.fr       */
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
	static char		*tempstr = NULL;
	char			*str;
	char			*buffer;
	int				nread;
	static int		times_called = 0;

	times_called++;
	printf("\n\nTimes Called: %d\n\n", times_called);
	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *) ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
	{
		cleanup(buffer);
		return (NULL);
	}
	nread = 1;
	str = ft_strdup("");
	printf("Static tempstr: %s and Len of tempstr: %zu\n", tempstr, ft_strlen(tempstr));


	while(nread != 0)
	{
		if (ft_strchr(tempstr, '\n'))
		{
			str = ft_strjoin(str, ft_substr(tempstr, 0, find_new_line_index(tempstr)));
			tempstr = ft_substr(tempstr, (find_new_line_index(tempstr) + 1), BUFFER_SIZE);
			nread = 0;
		}
		else
		{
			nread = read(fd, buffer, BUFFER_SIZE);
			printf("Buffer: %s and Len of buffer: %zu\n", buffer, ft_strlen(buffer));

			buffer[BUFFER_SIZE] = '\0';
			if (tempstr != NULL)
				str = ft_strjoin(str, tempstr);
			
			if (ft_strchr(buffer, '\n'))
			{
				str = ft_strjoin(str, ft_substr(buffer, 0, find_new_line_index(buffer)));
				tempstr = ft_substr(buffer, (find_new_line_index(buffer) + 1), BUFFER_SIZE);
				nread = 0;
				printf("\nStr1 is: %s\n", str);

			}
			else
				str = ft_strjoin(str, buffer);
		}
	}
	return (str);
}
