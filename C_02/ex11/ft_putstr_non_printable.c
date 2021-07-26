#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);
void	char_to_hex(char c);
void	ft_pustr(char *str);

int	main(void)
{
	ft_putstr_non_printable("Oi\nvoce esta bem ?");
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 32)
		{
			char_to_hex(c);
		}
		else
		{
			printf("%c", c);
//			ft_pustr(&c);
		}
		i++;
	}
}

void	char_to_hex(char c)
{
	int		quotient;
	char	mod;
	char	hex_number[10];
	int		current_digit;

	mod = 0;
	quotient = c;
	current_digit = 0;
	while (quotient != 0)
	{
		mod = quotient % 16;
		if (mod < 10)
			mod += 48;
		else
			mod += 87;
		quotient = quotient / 16;
		hex_number[current_digit] = mod;
		current_digit++;
	}
	if (current_digit == 1)
	{
		hex_number[1] = hex_number[0];
		hex_number[0] = '0';
		current_digit++;
	}
	hex_number[current_digit] = '\0';
	ft_pustr("\\");
	ft_pustr(&hex_number[0]);
}

void	ft_pustr(char *str)
{
	int		i;
	char	c;

	i = 0;
	printf("%c\n", str[0]);
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		
		i++;
	}
}
