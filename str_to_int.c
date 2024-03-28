#include "monty.h"
/**
 * is_int- This is a function that function that 
 * checks if the string passed in an integer
 *
 * @str: This is the string that is passed
 */

int is_int(char *str)
{
	int i;
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
		{
			continue;
		}
		else
		{
			fprintf(stderr, "not an int");
			return (-1);
		}
	}
	value = atoi(str);
	return (0);
}
