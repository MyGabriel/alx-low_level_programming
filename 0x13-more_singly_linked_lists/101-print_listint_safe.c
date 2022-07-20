/* File101: A func to print a linked list, use loop, ret num of node */
#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *data, *data_2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	data = head->next;
	data_2 = (head->next)->next;

	while
		(data_2)
	{
		if (data == data_2)
		{
			data = head;
			while
				(data != data_2)
			{
				nodes++;
				data = data->next;
				data_2 = data_2->next;
			}

			data = data->next;
			while
				(data != data_2)
			{
				nodes++;
				data = data->next;
			}

			return (nodes);
		}

		data = data->next;
		data_2 = (data_2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
