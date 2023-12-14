#include "monty.h"

/**
 *f_rotl- rotates the stack to the top
 *@head: stack head
 *@counter: line_number
 *
 *Return: Nothing
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp = *head, *current;

	if (*head == NULL || (*head)->next == NULL)
		return;
	current = (*head)->next;
	current->prev = NULL;
	while (tmp->next != NULL)
		temp = temp->next;
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = current;
}
