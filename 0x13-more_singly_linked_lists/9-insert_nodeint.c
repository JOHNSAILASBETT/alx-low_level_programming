#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double head pointer
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: adress of node created or null if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL || head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);

}
