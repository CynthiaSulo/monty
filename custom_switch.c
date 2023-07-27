#include "monty.h"
/**
 * custom_swap - swaps the top two elements of the stack.
 * @custom_stack: pointer to pointer representing the stack.
 * @custom_line_number: line number in the file.
 * Description: swaps the top two elements if stack has fewer
 * than two elements, it prints an error message.
 * Return: nothing
 */
void custom_swap(stack_t **custom_stack, unsigned int custom_line_number)
{
	stack_t *custom_ptr2;
	stack_t *custom_ptr3;

	if (*custom_stack == NULL || (*custom_stack)->next == NULL)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", custom_line_number);
		exit(EXIT_FAILURE);
	}

	custom_ptr2 = (*custom_stack)->next;
	custom_ptr3 = (*custom_stack)->next->next;
	custom_ptr2->next = *custom_stack;
	(*custom_stack)->next = custom_ptr3;
	*custom_stack = custom_ptr2;
}
