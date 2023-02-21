/**
 * print_alphabet - loop through each alphabet
 *
 * Return: null (no return value)
 */

void print_alphabet(void)
{
		char x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return;
}
