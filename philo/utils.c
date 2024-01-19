
int	ft_atoi(const char *str)
{
	long	n;
	int		flag;

	n = 0;
	flag = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			flag = -1;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= '9')
		n = (n * 10) + (*str++ - '0');
	if ((n * flag) > 2147483647 || (n * flag) < -2147483648)
		return (0);
	return ((int)(n * flag));
}