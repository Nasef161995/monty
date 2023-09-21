#include "monty.h"
/**
 * op_swap - .
 * @stack: .
 * @line_number: .
 * Return: .
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
    int a, b, temp;
    if (*stack == NULL || (*stack)->next == NULL)
    {
        
        printf("L%d: can't swap, stack too short\n", line_number);
        error_exit(stack);
    }
    else
    {
        a = (*stack)->n;
        b = (*stack)->next->n;
        temp = b;
        b = a;
        a = temp;
        (*stack)->n = a;
        (*stack)->next->n = b;
    }
}
