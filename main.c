#include "monty.h"

/**
 * main - arguments that open a file
 *
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: success 
 **/
int main(int argc, char **argv)
{
	stack_t *head = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	
	if (file_read(argv[1], &head) == 0)
	{
		printf("Error: Can't open file <%s>", argv[1]);
		exit(EXIT_FAILURE);
	}
	free_list(head);
	return(EXIT_SUCCESS);	
}
