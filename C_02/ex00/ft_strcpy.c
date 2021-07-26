char	*ft_strcpy(char *dest, char *src);
int		get_str_len(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = get_str_len(src);
	dest[size + 1] = '\0';
	while (size >= 0)
	{
		*(dest + size) = *(src + size);
		size--;
	}
	return (dest);
}

int	get_str_len(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter++;
	return (counter);
}
