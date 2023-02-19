#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all possible combinations of two two-digit numbers'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (((i + j) < (k + l) && k >= i) || i < k)
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == '9' && j == '8' && k == '9' && l == '9'))
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
