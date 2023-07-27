#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct monty_globals
{
    char *tokens[100];
} monty_globals_t;

extern monty_globals_t global;

void custom_swap(stack_t **custom_stack, unsigned int custom_line_number);
void tokenize_line(char *input_line);
void custom_pop(stack_t **custom_stack, unsigned int custom_line_number);

#endif /* MONTY_H */
