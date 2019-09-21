#include "../includes/list.h"

t_list	*list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *list;
	unsigned int i;

	list = begin_list;
	i = 0;
	while (list)
	{
		if(i == nbr)
			return (list);
		list = list->next;
		i++;
	}
	return (list);
}
