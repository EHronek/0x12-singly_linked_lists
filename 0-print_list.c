#include <stdio.h>
#include "lists.h"
/**
  * print_list - it should print all the elemnts of a list_t list
  * @h: the list to be printed
  * Return: the number of nodes
  */
size_t print_list(const list_h *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node_count, h->str);
		h = h->next;
		node_count++;
	}
	return node_count
}
