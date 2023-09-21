#include "monty.h"
/**
 * op_pint - .
 * @stack: .
 * @line_number: .
 * Return: .
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
    if ((*stack) == NULL)
    {
        
        printf("L%d: can't pint, stack empty\n", line_number);
        error_exit(stack);
    }
    printf("%d\n", (*stack)->n);
}
