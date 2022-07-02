#include <stdio.h>

/**
 * main - Entry point
 * This program prints comma-separated digits
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = 49; j <= 57; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
