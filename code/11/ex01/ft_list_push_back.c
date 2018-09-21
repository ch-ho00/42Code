#include "ft_list.h"

void	ft_list_push_back(t_list **head, void *data)
{
	t_list	*new;

	if (head && *head)
	{
		new = new * head;
		while (new->next){
      new = new->next;
    }
			new->next = ft_create_elem(data);
	}
	else
		*head = ft_create_elem(data);
}
