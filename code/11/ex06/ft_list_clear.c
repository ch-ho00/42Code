#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **head)
{
	t_list *rm;

	if (!head || !*head)
		return ;
	while (*head != NULL )
	{
		rm = *head;
		*head = (*head)->next;
		free(rm);
	}
	*head = NULL;
}
