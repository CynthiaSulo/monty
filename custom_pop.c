#include "monty.h"

/**
 * custom_pop - Removes the top element from the stack.
 * @custom_stack: Pointer to pointer representing the stack.
 * @custom_line_number: Line number in the file.
 *
 * Description: If the stack is empty, it prints an error message and exits.
 * Return: Nothing.
 */
void custom_pop(stack_t **custom_stack, unsigned int custom_line_number)
{
	stack_t *custom_top;

	if (*custom_stack == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", custom_line_number);
		exit(EXIT_FAILURE);
	}

	custom_top = *custom_stack;
	*custom_stack = (*custom_stack)->next;
	free(custom_top);
}
