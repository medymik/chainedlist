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
#endif
