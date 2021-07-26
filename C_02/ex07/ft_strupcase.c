char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 97 && c <= 122)
			*(str + i) = c - 32;
		i++;
	}
	return (str);
}
