#include "monty.h"
/**
 * op_div - ...
 * @stack: ...
 * @line_number: ...
 * Return: .
 */
void op_div(stack_t **stack, unsigned int line_number)
{
int a, b, result;
stack_t *temp;
if (*stack == NULL || (*stack)->next == NULL)
{

free_stack(stack);
fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
fclose(y.file);
exit(EXIT_FAILURE);
}
if ((*stack)->n == 0)
{
free_stack(stack);
fprintf(stderr, "L%d: division by zero\n", line_number);
fclose(y.file);
exit(EXIT_FAILURE);
}
else
{
temp = *stack;
a = (*stack)->n;
b = (*stack)->next->n;
result = b / a;
(*stack)->next->n = result;

(*stack)->next->prev = NULL;
*stack = (*stack)->next;
free(temp);
}
}
