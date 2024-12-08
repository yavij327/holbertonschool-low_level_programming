#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specified index.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node to delete, starting from 0.
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
		return (-1);


	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
