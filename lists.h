#ifndef _LISTS_H_
#define _LISTS_H_
#include <unistd.h>
/**
  * struct s_list - singly linked list
  * @str: the string somewhere in memory
  * @s_len: the length of the string
  * @next: points to the next node
  * Description: is a singly-linked node structure
  */
typedef struct s_list
{
	unsigned int s_len;
	char *str;
	struct s_list *next;
}list_t;
size_t print_list(const list_t *h);
int _putchar(char c);

#endif
