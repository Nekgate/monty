#include "monty.h"
/**
 * f_mod - dfinds remainder division top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 *
 *Return: Nothing
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	int len = 0, current;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = h->next->n % h->n;
	h->next->n = current;
	*head = h->next;
	free(h);
}
