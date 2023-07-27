#include "monty.h"

/**
 * custom_mod - computes the rest of the division of the 2nd top element
 *              of custom_stack by the 1st in custom_stack.
 * @custom_stack: pointer to pointer representing the custom_stack
 * @custom_line_number: line number
 * Return: nothing
 */
void custom_mod(stack_t **custom_stack, unsigned int custom_line_number)
{
	stack_t *custom_ptr2;

	if (*custom_stack == NULL || (*custom_stack)->next == NULL)
	{
		dprintf(2, "L%u: can't mod, custom_stack too short\n", custom_line_number);
		exit(EXIT_FAILURE);
	}

	custom_ptr2 = (*custom_stack)->next;

	if ((*custom_stack)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", custom_line_number);
		exit(EXIT_FAILURE);
	}

	custom_ptr2->n = custom_ptr2->n % (*custom_stack)->n;
	custom_pop(custom_stack, custom_line_number);
}
