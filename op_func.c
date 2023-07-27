#include "monty.h"

/**
 * op_func - Function that selects the correct operation to perform.
 * @opcode: The operation code.
 *
 * Return: A pointer to the corresponding function.
 */
void (*op_func(char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t op_codes[] = {
		{"push", custom_push},
		{"pall", custom_print_all},
		{"pint", custom_pint},
		{"pop", custom_pop},
		{"swap", custom_swap},
		{"add", custom_add},
		{"nop", custom_nop},
		{"sub", custom_sub},
		{"div", custom_div},
		{"mul", custom_mul},
		{"mod", custom_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (op_codes[i].opcode != NULL)
	{
		if (strcmp(opcode, op_codes[i].opcode) == 0)
		{
			return (op_codes[i].f);
		}
		i++;
	}
	return (NULL);
}
