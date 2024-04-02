#include "monty.h"

/**
 * f_pall - A function that prints all the arguments
 * in the stack.
 *
 * @stack: The pointer to a pointer of the
 * linkedlist
 * @line_number: the line number of the file
 * Return: void
 */

void f_pall(stack_t **stack, unsigned int __attribute__ ((unused))line_number)
{
	stack_t *current_node;

	current_node = *stack;
	if (current_node == NULL)
		fprintf(stdout, "%d\n", 0);
	while (current_node != NULL)
	{
		fprintf(stdout, "%d\n", current_node->n);
		current_node = current_node->prev;
	}
}

