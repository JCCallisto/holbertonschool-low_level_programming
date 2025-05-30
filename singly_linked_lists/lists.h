#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - Singly linked list.
 * @str: String - (malloc string).
 * @len: length of the string.
 * @next: Points to the next node
 * Description: Singly linked list node structure.
 */

struct list_s

{
	char *str;
	unsigned int len;
	struct list_s *next;
};

typedef struct list_s list_t;

int _putchar(char c);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
