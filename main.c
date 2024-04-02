#include "monty.h"

/**
 * main- This is the entry point to the program
 *
 * Return: 0
 */

int main(void)
{
	char str[50];
	FILE *fp;
	char **tokens;
	unsigned int line_number;
	void (*op)(stack_t **, unsigned int);

	stack_t *head;
	line_number = 0;
	/*argc = argc - 1;*/
	head = NULL;

	/*if (argc < 1 || argc > 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}*/
	fp = fopen("./text.txt", "r");
	if (fp == NULL)
	{
		/*fprintf(stderr, "Error: Can't open file %s\n", argv[1]);*/
		exit(EXIT_FAILURE);
	}

	while (fgets(str, sizeof(str), fp))
	{
		tokens = string_tokenizer(str);
		op = get_op_func(strtok(tokens[0], "\n"));
		if (tokens[1] != NULL)
			is_int(tokens[1]);
		line_number += 1;
		op(&head, line_number);
	}
	return (0);
}
