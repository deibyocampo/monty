#include "monty.h"

/**
 * file_read - receive the first argument is the file.
 *
 * @str: first argument the line command
 * @head: double pointer the linked list
 *
 * Return: 1 if the could be read or 0 if the file error
 */
int file_read(char *str, stack_t **head)
{
	char *buffer = NULL;
	size_t buff_size = 0;
	FILE *file;
	ssize_t characters = 0;
	int count;

	file = fopen(str, "r");

	if (file == NULL)
	{
		printf("Error: Can't open file <%s>", str);
		exit(EXIT_FAILURE);
	}

	characters = getline(&buffer, &buff_size, file);

	if (characters < 0)
	{
		printf("Error: Can't open file <%s>", str);
		exit(EXIT_FAILURE);
	}

	while (characters != 0)
	{
		count += 1;
		tokenize(buffer, head, count);
	}
	free(buffer);
	fclose(file);
	return (1);
}
