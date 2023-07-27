#include "monty.h"

/**
 * custom_nop - does not do anything
 * @custom_stack: pointer to pointer representing the stack
 * @custom_line_number: line number
 * Return: nothing
 */
void custom_nop(stack_t **custom_stack, unsigned int custom_line_number)
{
	(void) *custom_stack;
	(void) custom_line_number;
}
