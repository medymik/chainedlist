#include <stdlib.h>
#include "../includes/list.h"

/*
 * Function to create a new node 
 * that's take data and return the created pointer to node
 */
t_list	*create_elem(void *data)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}
