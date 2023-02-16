#include <stdio.h>

/**
* main - Entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", typeof(char));
	printf("Size of an int: %d byte(s)\n", typeof(int));
	printf("Size of a long int: %d byte(s)\n", typeof(long int));
	printf("Size of a long long int: %d byte(s)\n", typeof(long long int));
	printf("Size of a float: %d byte(s)\n", typeof(float));
	return (0);
}
