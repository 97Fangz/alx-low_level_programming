#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: list to be freed
 * Return: always 0
 */

void free_list(list_t *head)
{
list_t *list;

while (head)

{
list = head->next;
free(head->str);
free(head);
head = list;
}
}
