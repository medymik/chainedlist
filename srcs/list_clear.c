#include <stdlib.h>
#include "../includes/list.h"

void	list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;
	list = *begin_list;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
	*begin_list = NULL;
}
