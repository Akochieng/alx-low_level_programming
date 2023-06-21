#ifndef CALC
#define CALC

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

#endif
