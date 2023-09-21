#include "monty.h"
/**
 * op_pop - ...
 * @stack: ...
 * @line_number: ....
 * Return: .....
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;
    if ((*stack) == NULL)
    {
        
        printf("L%d: can't pop an empty stack\n", line_number);
        error_exit(stack);
    }

    if ((*stack)->next == NULL)
    {
        free(*stack);
        *stack = NULL;
        return;
    }

    temp = *stack;

    (*stack)->next->prev = NULL;
    *stack = (*stack)->next;
    free(temp);
}
