#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot 13
 * @s: pointer to string
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int x;
	int t;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char datarot[] = "NOPQRSTUVWXYZABCDEFGIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (t = 0; t < 52; t++)
		{
			if (s[x] == data1[t])
			{
				s[x] = datarot[t];
				break;
			}
		}
	}
	return (s);
}
