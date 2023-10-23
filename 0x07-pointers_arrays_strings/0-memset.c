#include "main.h"
/**
* _memset - fill a block of memory
* @s: starting address of memory
* @b: the desired value
* @n: number of bytes to be changes
*
* Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)

s[i] = b;

return (s);
}

