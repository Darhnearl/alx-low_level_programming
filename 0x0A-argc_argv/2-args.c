#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);

return (0);
}
