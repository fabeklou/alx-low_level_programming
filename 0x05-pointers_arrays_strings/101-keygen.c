#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define _PASS_LEN 100
#define CHECK_SUM 2772



/**
* gen_pass - generates a valide random password
*
* @_sum: A pointer to a variable that keep tracks genreted password
* ascii value sum.
*
* Return: The allocated char* password
*/
char *gen_pass(int *_sum)
{
	const char alphanum[] = "0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	char *password = malloc(_PASS_LEN + 1);
	int i;

	srand(time(NULL));
	for (i = 0; *_sum < CHECK_SUM - (127); ++i)
	{
		password[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		*_sum += (int) password[i];
	}
	password[i] = '\0';
	return (password);
}

/**
 * main - Entry point
 *
 * Description: generetes a valid key for the program 101-crackme
 *
 * Return: void
 */
int main(void)
{
	int sum = 0;
	char *password = gen_pass(&sum);

	char *difference = malloc(2);
	difference[0] = CHECK_SUM - sum;
	difference[1] = '\0';
	strcat(password, difference);

	printf("%s", password);

	free(password);
	free(difference);
	return (0);
}
