#ifndef LIST_H

#define LIST
typedef struct s_list t_list;
struct s_list
{
	void	*data;
	t_list	*next;
};

t_list	*create_elem(void *data);
void	list_push_front(t_list **head, void *data);
void	list_push_back(t_list **head, void *data);
int	list_size(t_list *list);
t_list	*list_last(t_list *begin_list);
t_list	*list_push_params(int ac, char **av);
void	list_clear(t_list **begin_list);
t_list	*list_at(t_list *begin_list, unsigned int nbr);
void	list_reverse(t_list **begin_list);
void	list_foreach(t_list *begin_list, void (*f)(void *));
void    list_foreach_if(t_list *begin_list, void (*f)(void *),
            void *data_ref, int (*cmp)(void*, void*));
#endif
