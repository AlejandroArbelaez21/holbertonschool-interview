#include <stdio.h>
#include "lists.h"
/**
 * listint_len - writes the character n to stdout
 * @h: element of the structure
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
	{
	i++;
	h = h->next;
	}
return (i);
}

/**
 * is_palindrome - writes the character n to stdout
 * @head: element of the structure
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp;
	int cont = 0, num;
	int len = 0;
	int buff[1024];

	if (head == NULL)
		return (1);
	tmp = *head;
	len = listint_len(*head);

	while (cont < len / 2)
	{
		buff[cont] = tmp->n;
		tmp = tmp->next;
		cont++;
	}

	num = cont - 1;

	if (len % 2 != 0)
		tmp = tmp->next;

	while (num >= 0)
	{
		if (buff[num] != tmp->n)
			return (0);
		tmp = tmp->next;
		num = num - 1;
	}
	return (1);
}
