int		atoi(const char *str)
{
	int index;
	int neg_multi;
	int result;

	index = 0;
	result = 0;
	neg_multi = 1;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v'
			|| str[index] == '\f' || str[index] == '\r' || str[index] == ' ')
		index++;
	while ((str[index] == '-' || str[index] == '+'))
	{
		if (str[index] == '-')
			neg_multi = -1 * neg_multi;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		if (str[index] >= '0' && str[index] <= '9')
			result = (result * 10) + (str[index] - '0');
		index++;
	}
	result = neg_multi * result;
	return (result);
}