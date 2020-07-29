#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - writes the character n to stdout
 * @number: int of the structure to add
 * @head: head the node
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new_node, *tmp, *aux;
int num;

if (*head == NULL)
{
	return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = number;

aux = *head;
if (aux == NULL || aux->n > number)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
else
{
	tmp = *head;
	aux = tmp->next;
	for (num = 0; aux->n < number; num++)
	{
		if (aux->next != NULL)
		{
			tmp = aux;
			aux = tmp->next;
		}
		else
		{
			new_node->next = NULL;
			aux->next = new_node;
			return (new_node);
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
}
