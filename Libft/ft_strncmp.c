#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && (index < n - 1) && *s1)
	{
		s1++;
		s2++;
		index++;
	}
	return (*s1 - *s2);
}