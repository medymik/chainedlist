#include "../includes/list.h"
#include <stdio.h>

int	list_size(t_list *list)
{
	t_list *tmp;
	int i;
	printf("ok");
	i = 0;
	if(list)
	{
		tmp = list;
		while (tmp)
		{
			i++;
			tmp = tmp->next;
		}
	}

	return (i);
}
