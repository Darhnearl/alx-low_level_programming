#include "main.h"
/**
 * main - prints _putchar, as a message
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dan[] = "_putchar";
	int c;
	
	for (c = 0; c < 8; c++)
	{
		_putchar(dan[c]);
	}
	_putchar('\n');
	return (0);
}
