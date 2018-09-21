#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *head)
{
	t_list	*out;

	if (head == NULL)
		return (NULL);
	out = head;
	while (out->next != NULL)
		out = out->next;
	return (out);
}
