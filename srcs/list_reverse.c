#include "../includes/list.h"

void	list_reverse(t_list **begin_list)
{
	t_list *current;
	t_list *next;
	t_list *prev;

	current = *begin_list;
	prev = 0;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}
