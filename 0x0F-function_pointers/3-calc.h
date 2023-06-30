#ifndef CALC
#define CALC
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *struct op - struct op
  *
  *@op: The operator
  *@f: the function associated
  */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int (*get_op_func(char *s))(int, int);
int strcomp(char *a, char *b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif
