  #include <stdio.h>
#include <stdlib.h>
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
	
	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (; i < argc; i ++)
		{
			if(!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			j += atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
