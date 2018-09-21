#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int argc, char **argv)
{
	t_list	*list;
	int		i;
	t_list	*tmp;

	if (!argc > 0)
		return (NULL);
	i = 0;
	tmp = NULL;
	while (i != argc)
	{
		list = ft_create_elem(argv[i]);
		list->next = tmp;
		tmp = list;
		++i;
	}
	return (list);
}
