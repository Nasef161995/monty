#include "monty.h"

/**
 * find_opcode - .
 * @opcode: .
 * Return: .
 */
int find_opcode(char *opcode, instruction_t operators_code[])
{
int i;
for (i = 0; i < 7; i++)
{
if (strcmp(opcode, operators_code[i].opcode) == 0)
return (i);
}

return (-1);
}

/**
 * find_opcode - .
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
