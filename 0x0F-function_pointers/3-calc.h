#ifndef CALC_H
#define CALC_H
#include <string.h>
/**
 * struct op - struct op
 *
 * @op: the operator for the operaions
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* calc.h */
