#include <stdio.h>

/**
 * main - Entry point
 * This program prints comma-separated digits
 * Return: 0 (Success)
 */
int main(void)
{
int j;
int i;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{   
putchar(i);
putchar(j);
if (i != 57 || j != 57)
{
putchar(44);
putchar(32);
}
}
}

putchar(10);
return (0);
}
