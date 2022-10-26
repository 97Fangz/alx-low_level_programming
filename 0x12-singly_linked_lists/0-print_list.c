#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t
 * Return: node in h
 */

size_t print_list(const list_t *h)
{
size_t node = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
	printf("[%u] %s\n", h->len, h->str);
h = h->next;

node++;
}
return (node);
}
