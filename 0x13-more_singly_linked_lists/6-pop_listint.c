#include "lists.h"

/**
*pop_listint-deletes the head node of a listint_t linked list
*@head:double pointer to the head node of the linked list
*
*Return:the head node's data (n)
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
