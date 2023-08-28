#include "lists.h"

/**
 * listint_len - This returns the number of elements in a linked lists
 * @k: linked list of type listint_t to traverse
 *
 * Return: number of nodes after compilation
 */
size_t listint_len(const listint_t *k)
{
	size_t num = 0;

	while (k)
	{
		num++;
		k = k->next;
	}

	return (num);
}

