#include "ft_list.h"

void	ft_list_push_front(t_list **head, void *data)
{
	t_list *new;

	if (*head != NULL)
	{
		new = ft_create_elem(data);
		new->next = *head;
		*head = new;
	}
	else
		*head = ft_create_elem(data);
}
