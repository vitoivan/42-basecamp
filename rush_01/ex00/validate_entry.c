#include "rush.h"

int	validate_entry(char *str, int *views)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			views[j] = str[i] - '0';
			j++;
		}
		else
			if (str[i] != ' ')
				return (1);
		i++;
	}
	return (0);
}
