#include "../includes/list.h"

void    list_foreach_if(t_list *begin_list, void (*f)(void *),
            void *data_ref, int (*cmp)(void*, void*))
{
    t_list *list;

    list = begin_list;
    while (list)
    {
        if(cmp(list->data, data_ref) == 0)
            f(list->data);
        list = list->next;
    }
}
