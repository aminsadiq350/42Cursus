#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	val;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		val = (unsigned int)(n * -1);
	}
	else
		val = (unsigned int)n;
	if (val >= 10)
		ft_putnbr_fd(val / 10, fd);
	ft_putchar_fd((char)(val % 10 + 48), fd);
}