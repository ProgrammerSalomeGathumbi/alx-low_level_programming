#include <stdio.h>
#include <stdlib.h>
/**
  * main -Entry point
  * @argc: counts arguments
  * @argv: string containing arguments
  * Return: 0
  */
int main(int argc, char **argv)
{
	(void)**argv;
if (argc == 1)
{
	printf("0\n");
}
	if (argc > 1)
	{
		{
			printf("%d\n", (argc - 1));
		}
	}
	return (0);
}
