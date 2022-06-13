#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
 
	dest = dst;
	if (dst < src) { 
		while (len--)
			*dest++ = *(unsigned char *)src++;
	} else { 
		src = src + len - 1;
		dest = dest + len - 1;
		while (len--) 
			*dest-- = *(unsigned char *)src--;
	} 
	return (dst);
}