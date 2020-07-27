#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - writes the character n to stdout
 * @number: int of the structure to add
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new_node, *tmp;
int num;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = number;

if (number == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
else
{
	tmp = *head;
	for (num = 0; tmp->next->n < number; num++)
	{
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
}
