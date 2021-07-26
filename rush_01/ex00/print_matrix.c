#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(matrix[i] + '0');
		if (i % 4 != 3)
			ft_putchar(' ');
		if (i % 4 == 3)
			ft_putchar('\n');
		i++;
	}
}

void	matrix_start(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		matrix[i] = 0;
		i++;
	}
}
