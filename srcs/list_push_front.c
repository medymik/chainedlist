#include "../includes/list.h"

void	list_push_front(t_list **head, void *data)
{
	t_list *new_node;

	if(*head)
	{
		new_node = create_elem(data);
		new_node->next = *head;
		*head = new_node;
	}
	else
		*head = create_elem(data);
}
