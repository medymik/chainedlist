#include "../includes/list.h"

t_list	*list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	while (list && list->next)
		list = list->next;
	return (list);
}
