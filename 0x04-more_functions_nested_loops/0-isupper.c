#include "main.h"

/**
 * _isupper - define if a character is uppercase
 *
 * @c: charater
 * Return: 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}