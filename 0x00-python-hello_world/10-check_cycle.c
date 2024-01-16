#include "lists.h"

/**
 * check_cycle - function that checks if a singly linked list has a cycle in it
 * @list: linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *full, *few;

	if (!list || !list->next)
		return (0);
	full = list;
	few = list;

	while (few != NULL && full != NULL && full->next != NULL)
	{
		few = few->next;
		full = full->next->next;
		if (few == full)
			return (1);
	}
	return (0);
}
