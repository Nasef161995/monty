#include "monty.h"
/**
 * op_pchar - ........
 * @stack: .........
 * @line_number: ........
 * Return: ..........
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
if ((*stack) == NULL)
{
free_stack(stack);
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
fclose(y.file);
exit(EXIT_FAILURE);
}
if (!((*stack)->n >= 0 && (*stack)->n <= 127))
{
free_stack(stack);
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
fclose(y.file);
exit(EXIT_FAILURE);
}

printf("%c\n", (*stack)->n);
}
