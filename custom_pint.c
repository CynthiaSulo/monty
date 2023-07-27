#include "monty.h"

/**
 * custom_pint - prints the value at the top of the stack
 * @custom_stack: pointer to pointer representing the stack.
 * @custom_line_number: Line number in the file.
 *
 * Description: This function prints the value at the top of the stack.
 * Return: Nothing.
 */
void custom_pint(stack_t **custom_stack, unsigned int custom_line_number)
{
	if (*custom_stack == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", custom_line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*custom_stack)->n);
}
