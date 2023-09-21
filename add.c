#include "monty.h"
/**
 * op_add - .
 * @stack: .
 * @line_number: .
 * Return: .
 */
void op_add(stack_t **stack, unsigned int line_number)
{
int a, b, sum;
stack_t *temp;
if (*stack == NULL || (*stack)->next == NULL)
{

free_stack(stack);
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
else
{
temp = *stack;
a = (*stack)->n;
b = (*stack)->next->n;
sum = a + b;
(*stack)->next->n = sum;

(*stack)->next->prev = NULL;
*stack = (*stack)->next;
free(temp);
}
}
