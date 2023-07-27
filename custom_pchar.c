#include "monty.h"

/**
 * custom_pchar -  prints the char at the top of the custom_stack
 * @custom_stack: pointer to pointer representing the custom_stack
 * @custom_line_number: line number
 * Return: nothing
 */
void custom_pchar(stack_t **custom_stack, unsigned int custom_line_number)
{
	if (*custom_stack == NULL)
	{
		dprintf(2, "L%u: can't pchar, custom_stack empty\n", custom_line_number);
		exit(EXIT_FAILURE);
	}

	if ((*custom_stack)->n < 32 || (*custom_stack)->n > 127)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", custom_line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*custom_stack)->n);
}
