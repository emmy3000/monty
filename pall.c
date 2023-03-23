#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *node;
	(void)counter;

	node = *head;

	if (node == NULL)
		return;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
