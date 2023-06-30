#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A function generating random valid passwords
 * for the program 101-crackme
 *
 * Return: 0 (success)
 */
int main(void)
{
	int pass[100];
	int t, sum, l;

	sum = 0;

	srand(time(NULL));

	for (t = 0; t < 100; t++)
	{
		pass[t] = rand() % 78;
		sum += (pass[t] + '0');
		putchar(pass[t] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			l = 2772 - sum - '0';
			sum += l;
			putchar(l + '0');
			break;
		}
	}
	return (0);
}
