#include "main.h"
/**
 * rev_string - print string in reverse
 * @*s: pointer to character
 * @s: charater input
 * return:reverse s
 */
void rev_string(char *s)
{
	int i, j;
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	a -= 1;
	i = 0;
	while (a > i)
	{
		j = s[i];
		s[i] = s[a];
		s[a] = j;
		i++;
		a--;
	}
}
