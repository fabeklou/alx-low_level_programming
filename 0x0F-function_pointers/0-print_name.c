/**
 * print_name - prints a name
 *
 * @name: name of the person
 * @f: callback function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i])
		i++;

	if (i > 0)
		f(name);
}
