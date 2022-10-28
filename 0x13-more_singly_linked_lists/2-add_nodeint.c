#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a llinked list
 * @head: pointer to the first node
 * @n: integer inserted to the new node
 * Return: pointer to the new node else return NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
