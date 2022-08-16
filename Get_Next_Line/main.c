#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"

#define MAX_LINE_LENGTH 80

int	main(int argc, char **argv)
{
	char			*path;
	// char			line[MAX_LINE_LENGTH] = {0};
	unsigned int	line_count = 0;
	int				fd;
	FILE 			*file;
	char *str;

	if (argc < 1)
		return (EXIT_FAILURE);
	path = argv[1];

	file = fopen(path, "r");
	fd = fileno(file);
	printf("\nFile Descriptor: %d", fd);
	printf("\nBuffer Size: %d", BUFFER_SIZE);

	if (!file)
	{
		perror(path);
		return (EXIT_FAILURE);
	}
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	// if(str)
		free(str);
	printf("\n\n\nEnd of Test Program!\n\n");


	if (fclose(file))
	{
		return (EXIT_FAILURE);
		perror(path);
	}
}
