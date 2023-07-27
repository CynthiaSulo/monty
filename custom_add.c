#include "monty.h"

/**
 * custom_add - adds the two top two elements of the custom_stack
 * @custom_stack: pointer to pointer representing the custom_stack
 * @custom_line_number: line number
 * Return: nothing
 */
void custom_add(stack_t **custom_stack, unsigned int custom_line_number)
{
	stack_t *custom_ptr2;

	if (*custom_stack == NULL || (*custom_stack)->next == NULL)
	{
		dprintf(2, "L%u: can't add, custom_stack too short\n", custom_line_number);
		exit(EXIT_FAILURE);
	}
	custom_ptr2 = (*custom_stack)->next;
	custom_ptr2->n = (*custom_stack)->n + custom_ptr2->n;
	custom_pop(custom_stack, custom_line_number);
}
