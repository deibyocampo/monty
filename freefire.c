#include "monty.h"
/**
 * free_list - free a doubly liked list
 *
 * @head: pointer to linked list
 **/
void free_list(stack_t *head)
{
	stack_t *tmpr;

	while (head != NULL)
	{
		tmpr = head;
		head = head->next;
		free(tmpr);
	}
}
