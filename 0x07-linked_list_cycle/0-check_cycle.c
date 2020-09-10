#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - writes the character n to stdout
 * @list: list for check the cycle
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int check_cycle(listint_t *list)
{
listint_t *tmp, *tmp2;

if (list == NULL)
	{
	return (0);
	}
tmp = list;
tmp2 = list;
while (tmp && tmp->next && tmp2 && tmp2->next)
	{
	tmp = tmp->next;
	tmp2 = tmp2->next->next;
	if (tmp == tmp2)
		{
		return (1);
		}
	}
return (0);
}
