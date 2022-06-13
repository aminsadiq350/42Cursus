#include <stdlib.h>

char *strdup(const char *s1)
{
	int		size;
	char	*cpy;

	size = 0;
	while (s1[size] != '\0')
		size++;
	cpy = (char *)malloc(size + 1);
	if (cpy == NULL)
		return (0);
	else
	{
		size = 0;
		while (s1[size] != 0)
		{
			cpy[size] = s1[size];
			size++;
		}
		cpy[size] = '\0';
		return (cpy);
	}
}