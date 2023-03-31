#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct lists_s - singly linked
 * @str: string
 * @len length
 * @next: it will point to the next list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);

#endif