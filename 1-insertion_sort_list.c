#include "sort.h"

/**
 * insertion_sort_list - insert an element in a sorted list
 * @list: list
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *aux = *list;
    listint_t *temp;
    listint_t *ayu;

    while (aux)
        {
            if aux->next
            {
                if aux->n > (aux->next)->n
                {
                    temp = aux->next;
                    temp->prev = aux->prev;
                    if (aux->prev)
                        aux->prev = temp;
                    else
                        *list = head;
                    if !(temp->next)
                        aux->next = NULL;
                    else
                    {
                        (temp->next)->prev = aux;
                        (aux->next)->next = temp->next;
                        temp->next = aux;
                    }
                    print_list(list);
                    while (temp)
                    {
                        if temp->n < (temp->prev)->n
                        {
                            ayu = temp->prev;
                            

                        }
                        else
                            break;
                    }
                }
                else  
                    aux = aux->next;
            }
            else  
                    aux = aux->next;        
        }
    }    
}
