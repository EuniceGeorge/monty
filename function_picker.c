#include "monty.h"
/**
 *  * get_op_func - a function, that based on what s is
 *   * calls the appropriate function
 *    * @s: the string to be passed
 *     */

void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t ops[] = {
		{"push", f_push},
		{NULL, NULL}
	};
	i = 0;
	while (i < 2)
	{
		if (strcmp(s, ops[i].opcode) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
