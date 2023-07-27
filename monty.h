#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
/**
 * struct monty_globals - Global structure for Monty interpreter.
 * @tokens: Array to store tokens from the input line.
 * @fptr: File pointer for the input file.
 * @line: Pointer to store the line read from the file.
 * @stack: Pointer
 * Description: Structure holds the global data for Monty interpreter.
 */
typedef struct monty_globals
{
	char *tokens[100];
	FILE *fptr;
	char *line;
} monty_globals_t;

extern monty_globals_t global;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void (*op_func(char *opcode))(stack_t **stack, unsigned int line_number);
void custom_swap(stack_t **custom_stack, unsigned int custom_line_number);
void tokenize_line(char *input_line);
void custom_pop(stack_t **custom_stack, unsigned int custom_line_number);
void custom_push(stack_t **custom_stack, unsigned int custom_line_number);
void custom_print_all(stack_t **custom_stack, unsigned int custom_line_number);
void custom_pint(stack_t **custom_stack, unsigned int custom_line_number);
void exit_status(void);
void custom_nop(stack_t **custom_stack, unsigned int custom_line_number);
void custom_add(stack_t **custom_stack, unsigned int custom_line_number);
void custom_sub(stack_t **custom_stack, unsigned int custom_line_number);
void custom_div(stack_t **custom_stack, unsigned int custom_line_number);
#endif /* MONTY_H */
