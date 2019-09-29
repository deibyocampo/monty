#include "monty.h"

/**
 * push - push a element to the linked list.
 *
 * @head: double pointr to the linked list.
 * @num: integer adding the list.
 * @line_number: number of lines.
 *
 **/
void push(stack_t **head, int num, unsigned int line_number)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		printf("L<%d>: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	node->n = num;
	node->prev = NULL;
	node->next = NULL;
	*head = node;

	if (*head != NULL)
	{
		(*head)->prev = node;
		node->next = *head;
		*head = node;
	}
}

/**
 * pall - print all the values on the stack
 *
 * @head: double pointer a linked list
 * @line_number: number of lines
 *
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *head;

	if (*head == NULL)
		return;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	line_number = line_number;
}
