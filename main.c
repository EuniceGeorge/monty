#include "monty.h"

/**
 * main- This is the entry point to the program
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char str[50];
	FILE *fp;
	char **tokens;
	unsigned int line_number;
	void (*op)(stack_t **, unsigned int);

	stack_t *head = NULL;
	line_number = 0;
	argc = argc - 1;
	if (argc < 1 || argc > 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(str, sizeof(str), fp))
	{
		/*fprintf(stdout, "%s\n", str);*/
		tokens = string_tokenizer(str);
		op = get_op_func(tokens[0]);
		line_number += 1;
		/*op(head, line_number);*/
	}
	printf("%s\n", tokens[1]);
	return (0);
}
