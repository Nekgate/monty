#include "monty.h"

/**
 *f_rotr - rotates the stack to the top.
 *@head: pointer to the stack
 *@counter: line number
 *
 *Return: Nothing
 */
void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	if (*head == NULL || (*head)->next == NULL)
		return;
	while (current->next)
		current = current->next;
	current->next = *head;
	current->prev->next = NULL;
	current->prev = NULL;
	(*head)->prev = NULL;
	(*head) = current;
}
