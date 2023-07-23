#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * writing you line of code
 * Remember:
 * Not allowed to use a
 * Not allowed to modify p
 * only one statement of  code
 * you are not allowed to code anything else than this code
 */
	*(p + 5) = 98;
/*...so that it prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
