#include "rush.h"

int	validate(int *p, int *table, int *view);
int	solve(int *p, int *table, int *view);

int static	g_t[24][4] = {
	{4, 2, 3, 1}, {4, 1, 3, 2}, {4, 3, 1, 2}, {4, 2, 1, 3}, {4, 3, 2, 1},
	{3, 1, 4, 2}, {3, 4, 2, 1}, {3, 2, 1, 4}, {3, 4, 1, 2}, {3, 1, 2, 4},
	{3, 2, 4, 1}, {2, 1, 3, 4}, {4, 1, 2, 3}, {2, 1, 4, 3}, {2, 3, 1, 4},
	{2, 4, 1, 3}, {2, 3, 4, 1}, {2, 4, 3, 1}, {1, 4, 2, 3}, {1, 2, 3, 4},
	{1, 3, 4, 2}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 4, 3, 2}
};

int	*constr(int *vet1, int *vet2, int *vet3, int *vet4)
{
	int			i;
	int	static	res[16];

	i = 0;
	while (i < 4)
	{
		res[i] = vet1[i];
		res[i + 4] = vet2[i];
		res[i + 8] = vet3[i];
		res[i + 12] = vet4[i];
		i++;
	}
	return (res);
}

int	matrix_solver(int *view)
{
	int	p[4];
	int	*table;

	table = NULL;
	p[0] = 0;
	p[1] = 0;
	p[2] = 0;
	p[3] = 0;
	if (solve(&p[0], table, view))
		return (1);
	return (0);
}

int	solve(int *p, int *table, int *view)
{
	while (p[0] < 24)
	{
		while (p[1] < 24)
		{
			while (p[2] < 24)
			{
				while (p[3] < 24)
				{		
					if (validate(p, table, view))
						return (1);
					p[3]++;
				}
				p[3] = 0;
				p[2]++;
			}
			p[2] = 0;
			p[1]++;
		}
		p[1] = 0;
		p[0]++;
	}
	return (0);
}

int	validate(int *p, int *table, int *view)
{
	table = constr(g_t[p[0]], g_t[p[1]], g_t[p[2]], g_t[p[3]]);
	if (validate_column(table) && validate_view(table, view))
	{
		print_matrix(table);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	matrix[16];
	int	views[16];
	int	entry;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	entry = validate_entry(argv[1], views);
	if (entry == 0)
	{
		matrix_start(matrix);
		if (!matrix_solver(views))
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
