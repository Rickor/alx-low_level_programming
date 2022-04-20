#include <unistd.h>
/**
*_putchar - print character to stdout
*@c: character to print
*Return: always 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
