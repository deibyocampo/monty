#include "monty.h"

/**
 * tokenize - divide characters into tokens according
 * to their delimiter.
 *
 * @str: pointer to string
 * @head: double pointer to linked list.
 * @line_number: number the lines
 *
 * Return: 1 if the program compiled or 0 if error
 **/
int tokenize(char *str, stack_t **head, unsigned int line_number)
{
	char *token, *num;
	int number;

	token = strtok(str, "\t\n");
	num = strtok(NULL, "\t\n");

	if (num != NULL && strcmp(token, "push") == 0)
	{
		number = atoi(num);
		if (number != 0 || (strcmp(num, "0") == 0))
			push(head, number, line_number);
		else
		{
			printf("L<%d>: usage: push integer", line_number);
			exit(EXIT_FAILURE);
		}
	}
	else if (num == NULL && strcmp(token, "puhs") == 0)
	{
		printf("L<%u>: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	return (1);
}
