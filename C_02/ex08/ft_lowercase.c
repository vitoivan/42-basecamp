char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 65 && c <= 90)
			*(str + i) = c + 32;
		i++;
	}
	return (str);
}
