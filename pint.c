#include "monty.h"

void f_pint(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *current_node;

	current_node = *stack;

	if (current_node == NULL)
		fprintf(stderr, "list isempty");
	else
	{
		fprintf(stdout, "%d\n", current_node->n);
	}
}
