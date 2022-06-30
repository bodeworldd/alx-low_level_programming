#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
fprintf(stderr, "size of a char: %d byte(s)\n", sizeof(char));
fprintf(stderr, "size of an int: %d byte(s)\n", sizeof(int));
fprintf(stderr, "size of a long int: %d byte(s)\n", sizeof(long int));
fprintf(stderr, "size of a long long int: %d byte(s)\n", sizeof(long long int));
fprintf(stderr, "size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
