#include "monty.h"

/**
 *f_mul - multiplies top element from second top to get value
 *@head: pointer to the stack
 *@counter: line number
 *
 *Return: Nothing
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	int value, nodes;

	for (nodes = 0; current != NULL; nodes++)
		current = current->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	value = current->next->n * current->n;
	current->next->n = value;
	*head = current->next;
	free(current);
}
