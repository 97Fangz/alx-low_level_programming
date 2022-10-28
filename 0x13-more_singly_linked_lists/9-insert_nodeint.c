#include "lists.h"
#include <stdio.h>

/**
 * *insert_nodeint_at_index - function that inserts a new node
 * at agiven position
 * @head: pointer to the fist node
 * @idx: main integer
 * @n: second integer
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (a = 0; a < (idx - 1); a++)
{
if (temp == NULL || temp->next == NULL)
	return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
