#include "monty.h"
/**
 * op_str - ........
 * @stack: .........
 * @line_number: ........
 * Return: ..........
 */
void op_pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *temp;

if ((*stack) == NULL)
{
printf("\n");
}

temp = *stack;
while (temp != NULL)
{
if (temp->n == 0)
break;
if (!((*stack)->n >= 0 && (*stack)->n <= 127))
break;
printf("%c", temp->n);
temp = temp->next;
}
printf("\n");
}
