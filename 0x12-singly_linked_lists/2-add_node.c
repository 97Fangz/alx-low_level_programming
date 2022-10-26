#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Adds a new node at the beginning
 * of a list.
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 * Return: NULL else address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (!new)
	return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = *head;
*head = new;
return (new);
}

/**
 * _strlen - Calculate lenght of a string.
 * @s: string
 * Return: length of string s.
 */

int _strlen(const char *s)
{
int idx = 0;

for (; s[idx]; idx++)
	;
return (idx);
}
