#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dest;

	dest = dst;
	while (n--)
	{
		*dest++ = *(unsigned char *)src++;
	}
	return (dst);
}