/* File6: A func to del head node and ret it's data */
#include "lists.h"

/**
 * pop_listint - Entry Point
 * @head: head
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int head_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	head_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (head_data);
}
