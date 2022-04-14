#include "main.h"
/**
*more_numbers - print numbers
*
*Return: always 0
*/
void more_numbers(void)
{
int i;
count = 0;

while (count < 10)
{

for (i = 0; i <= 14; i++)
{
_putchar(i);
}
_putchar('\n');
count++;
}

_putchar('\n');
}
