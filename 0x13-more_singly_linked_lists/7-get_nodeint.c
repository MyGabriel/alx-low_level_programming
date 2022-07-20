/* File7: A func that ret the nth node */
#include "lists.h"

/**
 * get_nodeint_at_index - Entry Point
 * @head: head
 * @index: index
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_count = 0;

	while
		(n_count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			n_count++;
			head = head->next;
		}
	}

	return (head);
}
