#include "monty.h"

void f_push(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *new_node;
	stack_t *current_node;

	current_node = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		fprintf(stderr, "memory error");
	if (current_node == NULL)
	{
		new_node->n = value;
		new_node->prev = NULL;
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		new_node->n = value;
		current_node->next = new_node;
		new_node->prev = current_node;
		new_node->next = NULL;
		*stack = new_node;
	}
}
