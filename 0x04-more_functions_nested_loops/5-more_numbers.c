#include <stdio.h>
#include "main.h"

/**
*main_numbers - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
int n1, n2;

for (n1 = 0; n1 <= 14; n1++)
{
for (n2 = 0; n2 <= 14; n2++
{
if (n2 > 9)
{
putchar((n2 / 10) + '0');
}
putchar((n2 % 10) + '0');
}
putcar(10);
}
}
