#include <stddef.h>

size_t	ft_strlcpy(char *restrict dest, char *restrict src, size_t dstsize)
{
	size_t index;
	size_t res;

	index = 0;
	res = 0;
	while (src[res])
		res++;
	if (dstsize < 1)
		return (res);
	while (src[index] && index < dstsize - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (res);
}