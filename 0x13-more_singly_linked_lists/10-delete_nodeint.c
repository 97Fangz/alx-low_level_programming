#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a listint_t linked list
 * @head: pointer to the node
 * @index: main integer
 * Return: 1 if true else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int a = 0;

if (*head == NULL)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (a < index -1)
{
if (!temp || !(temp->next))
	return (-1);
temp = temp->next;
a++;
}
current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
