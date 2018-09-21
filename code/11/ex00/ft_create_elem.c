#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *out;

  out = malloc(sizeof(t_list))
	if (!out)
		return (NULL);
  out->next = NULL;
	out->data = data;
	return (out);
}
