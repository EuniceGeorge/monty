#include "monty.h"
/**
 * is_int- This is a function that function that 
 * checks if the string passed in an integer
 *
 * @str: This is the string that is passed
 */
int value;
void is_int(char *str)
{
	int i;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
			continue;
	}
	value = atoi(str);
}
