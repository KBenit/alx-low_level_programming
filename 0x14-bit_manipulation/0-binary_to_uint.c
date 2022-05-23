#include "main.h"

/**
 *convert a binary to an unsigned int
 *@b points at 0 and 1
 *
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b);
{
int i;
unsigned int umu_b = 0;

 if (b == Null)
   return (0);

for (i = 0; b[i]; i++)
       {
	 if (b[i] > '1' || b[i] < '0')
	   return (0);
         umu_b = 2 * umu_b + (b[i] - '0');
       }

return (umu_b);
}
