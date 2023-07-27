#include "monty.h"

/**
 * exit_status - Exit status function.
 *
 * Description: Frees memory and exits with failure status.
 */
void exit_status(void)
{
	free(global.line);
	fclose(global.fptr);
	exit(EXIT_FAILURE);
}
