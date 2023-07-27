#include "monty.h"

int main(int argc, char **argv)
{
	int num_chars = 0;
	unsigned int line_number = 1;
	char *filename;
	size_t line_buf_size = 0;
	void (*get_op_func)(stack_t **, unsigned int);
	stack_t *stack = NULL;
	stack_t *temp_stack;

	filename = argv[1];
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	global.fptr = fopen(filename, "r");
	if (global.fptr == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((num_chars = getline(&global.line, &line_buf_size, global.fptr)) != -1)
	{
		tokenize_line(global.line);

		if (global.tokens[0] == NULL || global.tokens[0][0] == '#')
		{
			line_number++;
			continue;
		}

		get_op_func = op_func(global.tokens[0]);
		if (get_op_func == NULL)
		{
			dprintf(2, "L%u: unknown instruction %s\n", line_number, global.tokens[0]);
			exit_status();
		}

		get_op_func(&stack, line_number);
		line_number++;
	}

	temp_stack = stack;
	while (temp_stack != NULL)
	{
		stack = temp_stack->next;
		free(temp_stack);
		temp_stack = stack;
	}

	free(global.line);
	fclose(global.fptr);

	return (0);
}
