char	*ft_strcapitalize(char *str);

int main(void)
{
	ft_strcapitalize("oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um");
}
char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	last;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if(i > 0)
		{
			last = *(str + i - 1);
		}
		if (i == 0 || last =)
		{
			if (c >= 97 && c <= 122)
				*(str + i) = c - 32;
		}
		else
		{
			if (c >= 65 && c <= 90)
				*(str + i) = c + 32;
		}
		i++;
	}
	return (str);
}
