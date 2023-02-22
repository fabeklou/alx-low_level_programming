#include <stdio.h>

/**
 * natural - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Void
 */
void main(void)
{
	/**
	 * @i: loop controling variable.
	 * @f1_temp & @f2_temp: temporary variables of type float
	 * @sum: sum of all the multiples
	 */
	int i, sum;
	float f1_temp, f2_temp;

	for (i = 0, sum = 0; i < 1024; i++)
	{
		f1_temp = ((float)i / 3);
		f2_temp = ((float)i / 5);
		if ((f1_temp == (int)f1_temp) || (f2_temp == (int)f2_temp))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}
