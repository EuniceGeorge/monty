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
		fprintf(stdout, "%s\n", str);
	return (0);
}
