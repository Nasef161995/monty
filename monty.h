#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * val_s - struct to file pointer
 * @file: file pointer
 * Description: structure file pointer
 */
typedef struct val_s
{
FILE *file;
} val_t;
extern val_t y;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void free_stack(stack_t **stack);

int find_opcode(char *opcode, instruction_t operators_code[]);

void run(stack_t **stack, char *filename);

void instructError(int count, char *line_copy);
void fileError(const char *file);
void argcError(void);
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack,
unsigned int line_number __attribute__((unused)));
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack __attribute__((unused)),
unsigned int line_number __attribute__((unused)));
void op_sub(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void op_mul(stack_t **stack, unsigned int line_number);
void op_mod(stack_t **stack, unsigned int line_number);
void op_pchar(stack_t **stack, unsigned int line_number);
void op_pstr(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_rotl(stack_t **stack, unsigned int line_number __attribute__((unused)));

#endif
