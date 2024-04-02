#include "monty.h"
/**
 * get_op_func - a function, that based on what s is
 *  calls the appropriate function
 *   @s: the string to be passed
 *   Return: void
 */
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
	int i;
	char *op_code;
	instruction_t ops[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"swap", f_swap},
		{"add", f_add},
		{NULL, NULL}
	};
	i = 0;
	while (i < 3)
	{
		op_code = ops[i].opcode;
		if (strcmp(s, op_code) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
