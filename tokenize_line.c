#include "monty.h"

/**
 * tokenize_line - Tokenize the input line.
 * @input_line: The string to be tokenized.
 * Return: Nothing.
 */
void tokenize_line(char *input_line)
{
	int num_tokens = 0;
	char *token = NULL;
	const char *delimiter = " \t\n\r";

	token = strtok(input_line, delimiter);
	while (token != NULL)
	{
		global.tokens[num_tokens] = token;
		token = strtok(NULL, delimiter);
		num_tokens++;
	}
	global.tokens[num_tokens] = NULL;
}
