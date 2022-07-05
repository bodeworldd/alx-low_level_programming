#include "main.h"

/**
* _isalpha - 1 if c is a letter, lowercase or uppercase, 0 otherwise
* @c: _isalpha argument
* Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
