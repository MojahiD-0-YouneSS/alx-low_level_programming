#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: The data of the head node that was deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (head == NULL || *head == NULL)
        return 0;

    temp = *head;
    *head = (*head)->next;
    data = temp->n;
    free(temp);
    return data;
}
