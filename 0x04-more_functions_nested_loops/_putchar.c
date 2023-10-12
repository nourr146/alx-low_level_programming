#include <unistd.h>
#include "main.h"

/**
 * _putchar is the function that writes the character c
 * c is the character to print
 * if return is successful 1 otherwise -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
