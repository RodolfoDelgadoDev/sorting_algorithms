#include "sort.h"

/**
 * insertion_sort_list - insert an element in a sorted list
 * @list: list
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *aux = *list;
    listint_t temp;

    while (aux)
        {
            if aux->next
            {
                if aux->n > (aux->next)->n
                {
                    temp = aux->next;
                    temp->prev = aux->prev;
                    aux->prev = temp;
                    if !(temp->next)
                        aux->next;
                    else
                    {
                        (temp->next)->prev = aux;
                        (aux->next)->next = temp->next;
                        temp->next = aux;
                    }



                }
            }
            else
                aux = aux->next;
        }
    }    
}
