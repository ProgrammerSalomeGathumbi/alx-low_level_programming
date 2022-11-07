#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Entry point
  *@argc: counts arguments
  *@argv: string containing arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
