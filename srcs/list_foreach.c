#include "../includes/list.h"

void    list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list;

    list = begin_list;
    while (list)
    {
        f(list->data);
        list = list->next;
    }
}