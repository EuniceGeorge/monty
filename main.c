#include "monty.h"
/**
 * main- This is the entry point to the program
 *
 * Return: 0
 */

int main (void)
{
	char *line = NULL;
	size_t len = 0;
	int Vread;

	printf("Enter value: \n");
	Vread = getline(&line, &len, stdin);
	if (Vread == -1)
		printf("ERROR");
	printf("%s", line);
	return 0;
}
