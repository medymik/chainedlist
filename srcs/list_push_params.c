#include "../includes/list.h"

t_list	*list_push_params(int ac, char **av)
{
	t_list *tmp;
	t_list *list;
	int i;

	i = 1;
	list = create_elem(av[i - 1]);
	while (i < ac)
	{
		tmp = create_elem(av[i]);
		tmp->next = list;
		list = tmp;
		i++;
	}
	return (list);
}
