#include "monty.h"


void f_swap(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *current_node;
	int prev_value;

	current_node = *stack;

	if (current_node == NULL)
		fprintf(stdout, "eRROR list is empty");
	prev_value = current_node->prev->n;
	current_node->prev->n = current_node->n;
	current_node->n = prev_value;
}
