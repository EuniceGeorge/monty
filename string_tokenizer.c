#include "monty.h"

char **string_tokenizer(char *str)
{
	char *str_cpy;
	char **inner_arr;
	char *ptr;
	char *found;
	int count = 0;

	str_cpy = malloc(strlen(str) + 1);
	if (str_cpy == NULL)
		return (NULL);
	strcpy(str_cpy, str);
	found = strtok(str_cpy, " ");
	while (found)
	{
		count++;
		found = strtok(NULL, " ");
	}
	inner_arr = malloc(sizeof(char *) * (count + 1));
	if (inner_arr == NULL)
		return (NULL);
	strcpy(str_cpy, str);
	found = strtok(str_cpy, " ");
	count = 0;
	while (found)
	{
		ptr = malloc(strlen(found) + 1);
		if (ptr == NULL)
			return (NULL);
		strcpy(ptr, found);
		inner_arr[count] = ptr;
		found = strtok(NULL, " ");
		count++;
	}
	inner_arr[count] = NULL;
	free(str_cpy);
	return (inner_arr);
}	
