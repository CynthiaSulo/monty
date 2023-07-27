#include "monty.h"

/**
 * custom_print_all - Prints all elements of the stack.
 * @custom_stack: Pointer to pointer representing the stack.
 * @custom_line_number: Line number in the file.
 *
 * Description: This function prints all elements of the stack.
 * Return: Nothing.
 */
void custom_print_all(stack_t **custom_stack, unsigned int custom_line_number)
{
	stack_t *custom_current;
	size_t custom_count = 0;

	(void)custom_line_number;
	custom_current = *custom_stack;
	if (custom_current == NULL)
	{
		return;
	}
	while (custom_current != NULL)
	{
		printf("%d\n", custom_current->n);
		custom_current = custom_current->next;
		custom_count++;
	}
}
