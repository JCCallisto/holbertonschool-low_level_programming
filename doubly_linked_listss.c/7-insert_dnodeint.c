#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added (starts at 0).
 * @n: Integer value to store in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new_node, *current;
	unsigned int count = 0;
	
	if (h == NULL)
	return (NULL);
	
	if (idx == 0)
	return (add_dnodeint(h, n));
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	
	new_node->n = n;
	
	current = *h;
	
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}
	
	if (current == NULL && count == idx)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current;
	new_node->prev = current->prev;
	
	if (current->prev != NULL)
	current->prev->next = new_node;
	
	current->prev = new_node;
	
	return (new_node);
}
