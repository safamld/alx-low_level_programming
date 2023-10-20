#include "lists.h"
/**
* list_len - function that returns the number of elements linked
* @h: pointer to the first node
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
size_t  count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
