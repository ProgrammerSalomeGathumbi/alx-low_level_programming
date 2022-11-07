 #include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main -Entry point
  * @argc: counts arguments
  * @argv: string containing arguments
  * Return: 1 when there is error
  */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		j = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", j);
	}
	return (0);
}
