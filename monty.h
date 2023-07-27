#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct monty_globals - Global structure for Monty interpreter.
 * @tokens: Array to store tokens from the input line.
 *
 * Description: Structure holds the global data for Monty interpreter.
 */
typedef struct monty_globals
{
	char *tokens[100];
} monty_globals_t;

extern monty_globals_t global;

void custom_swap(stack_t **custom_stack, unsigned int custom_line_number);
void tokenize_line(char *input_line);
void custom_pop(stack_t **custom_stack, unsigned int custom_line_number);
void custom_push(stack_t **custom_stack, unsigned int custom_line_number);
void custom_print_all(stack_t **custom_stack, unsigned int custom_line_number);
#endif /* MONTY_H */
