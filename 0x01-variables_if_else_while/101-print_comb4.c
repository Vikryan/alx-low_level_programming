#include <stdio.h>

/**
 * main - Printing different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int k = '0';
	int l = '0';
	int m = '0';

	for (m = '0'; m <= '9'; m++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (!((
