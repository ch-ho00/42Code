#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	tmp;
	int	*out;

	i = 0;
	out = (int*)malloc(sizeof(int) * length);
	while (tmp != length)
	{
		out[tmp] = (*f)(tab[tmp]);
		tmp++;
	}
	return out;
}
