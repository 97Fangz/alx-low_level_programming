#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add new node in the end of the linked list.
 * @head: head of te linked list
 * @str: string to add
 * Return:pointer to the new node added to the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;

new = malloc(sizeof(list_t));
if (!new)
	return (NULL);
temp = *head;
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next != NULL)
	temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(const char *s)
{
int idx = 0;

for (; s[idx]; idx++)
	;
return (idx);
}
