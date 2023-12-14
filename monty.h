#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

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

typedef void (*op_func)(stack_t **, unsigned int);
void mon_errors(unsigned int co_error, ...);
void node_free(void);
extern stack_t *head;
stack_t *nw_node(int n);
int main(int argc, char **argv);
void file_on(char *header_name);
void read_file(FILE *fp);
int func_put(char *str, int nmb_line, int clear);
void pint_mon(stack_t **stack, unsigned int n_mont);
void stack_add_fun(stack_t **node_new, unsigned int am);
void secound_err(int co_error, ...);
int parse(char *buff, int l_n, int fo);
void f_fun(char *op_c, char *v, int n, int fo);
void c_fun(op_func fun, char *op, char *v, int n, int fo);
void add_to_queue(stack_t **n_nod, __attribute__((unused))unsigned int n);
void nop(stack_t **stack, unsigned int l_n);
void swap(stack_t **head, unsigned int l_n);
void pall(stack_t **stck_h, unsigned int l_n);
void push(stack_t **node_new, __attribute__((unused)) unsigned int am);
void pop(stack_t **stack, unsigned int l_n);
void mon_add(stack_t **stack, unsigned int l_n);

#endif
