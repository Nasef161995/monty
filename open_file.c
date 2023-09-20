#include "monty.h"
/**
 * run - rum profram
 * @stack: stack list
 * @filename: file name
 * Return: .
 */
void run(stack_t **stack, char *filename)
{
char line[100];
char *line_copy, *_opcode;
int i;
unsigned int count = 0;
FILE *file;
instruction_t operators_code[] = {{"push", op_push},
{"pall", op_pall},
{"pint", op_pint},
{"pop", op_pop},
{"swap", op_swap},
{"add", op_add},
{"nop", op_nop}};
file = fopen(filename, "r");
if (file == NULL)
{
printf("Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}
while (fgets(line, sizeof(line), file) != NULL)
{
count++;
line_copy = strcat(line, "\0");
_opcode = strtok(line_copy, " ,\n");
if (_opcode == NULL)
continue;
i = find_opcode(_opcode, operators_code);
if (i >= 0)
operators_code[i].f(stack, count);
else
{
free_stack(stack);
printf("L%d: unknown instruction %s\n", count, line_copy);
exit(EXIT_FAILURE);
}
}
fclose(file);
}