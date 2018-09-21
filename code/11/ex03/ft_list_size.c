#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *head)
{
	t_list	*new;
	int		count;

	count = 0;
	if (head == NULL)
		return (count);
	new = head;
	while (new != NULL)
	{
		new = new->next;
		count++;
	}
	return (count);
}
