#include "../includes/list.h"

void	list_push_back(t_list **head, void *data)
{
	t_list *list;

	if(*head)
	{
		list = *head;
		while(list && list->next)
		{
			list = list->next;
		}
		list->next = create_elem(data);
	}
	else
	{
		*head = create_elem(data);
	}
}
