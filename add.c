#include "monty.h"

void f_add(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	int sum;
	stack_t *current_node;
	
	current_node = *stack;
	if (*stack  == NULL)
		fprintf(stderr, "list is empty");
	sum = current_node->prev->n + current_node->n;
	fprintf(stdout, "%d\n", sum);
}
