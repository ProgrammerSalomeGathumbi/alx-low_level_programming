#include "main.h"

/**

 * _islower - checks for lowercase character

 * @c: single character input

 * Return: Always 0

 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')

		return (1);

	return (0);

}
