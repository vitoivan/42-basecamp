int	ft_str_is_lowercase(char *str);
int	get_str_len(char *str);
int	check_string(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	length;
	int	result;

	length = get_str_len(str);
	if (!length)
		return (1);
	result = check_string(str);
	return (result);
}

int	get_str_len(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter++;
	return (counter);
}

int	check_string(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'a' || c > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
