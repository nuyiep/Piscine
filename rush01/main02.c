#include "functions.h"

int main(int c, char v)
{
	int tab[4][4] = 
	{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};
	int *entry;

	if (check(c, v) == 1)
		return (0);
	entry = get_numbers(v[1]);

	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Solutions could not be found\n");
	return (0);
}



