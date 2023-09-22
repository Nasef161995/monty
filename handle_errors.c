#include "monty.h"
/**
 * find_opcode - .
 * @opcode: .
 * @operators_code: ........
 * Return: .
 */

int find_opcode(char *opcode, instruction_t operators_code[])
{
int i;
for (i = 0; i < 14; i++)
{
if (strcmp(opcode, operators_code[i].opcode) == 0)
return (i);
}
return (-1);
}

/**
 * free_stack - .
 * @stack: .
 * Return: .
 */
void free_stack(stack_t **stack)
{

if (*stack)
{
while ((*stack)->next != NULL)
{
*stack = (*stack)->next;
free((*stack)->prev);
}
free(*stack);
}
}
/**
 * argcError - .
 * Return: .
 */
void argcError(void)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
/**
 * fileError - .
 * @file: .
 * Return: .
 */
void fileError(const char *file)
{
fprintf(stderr, "Error: Can't open file %s\n", file);
exit(EXIT_FAILURE);
}
/**
 * instructError - .
 * @line_copy: .
 * @count: .
 * Return: .
 */
void instructError(int count, char *line_copy)
{
fprintf(stderr, "L%d: unknown instruction %s\n", count, line_copy);
fclose(y.file);
exit(EXIT_FAILURE);
}
