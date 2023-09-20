#include "monty.h"
/**
 * op_push - ....
 * @stack: ...
 * @line_number: .....
 * Return: ......
 */
void op_push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
    char *ch;
    int data;

    ch = strtok(NULL, " ,\n");
    if (ch == NULL)
    {
        free_stack(stack);
        printf("L%d: usage: push integer\n", line_number);
        return;
    }

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        printf("Error: malloc failed\n");
        return;
    }

    data = atoi(ch);

    new->n = data;
    new->prev = NULL;

    if (*stack == NULL)
    {
        new->next = NULL;
        *stack = new;
    }
    else
    {
        new->next = *stack;
        (*stack)->prev = new;
        *stack = new;
    }
}
