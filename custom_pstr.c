#include "monty.h"
/**
 * custom_pstr - prints the string starting at the top of the custom_stack,
 * followed by a newline.
 * @custom_stack: pointer to pointer representing the custom_stack.
 * @custom_line_number: line number.
 * Return: nothing.
 */
void custom_pstr(stack_t **custom_stack, unsigned int custom_line_number)
{
	stack_t *custom_ptr;

	(void) custom_line_number;
	custom_ptr = *custom_stack;
	while (custom_ptr != NULL && custom_ptr->n != 0 &&
			custom_ptr->n >= 0 && custom_ptr->n <= 127)
	{
		printf("%c", custom_ptr->n);
		custom_ptr = custom_ptr->next;
	}
	printf("\n");
}
