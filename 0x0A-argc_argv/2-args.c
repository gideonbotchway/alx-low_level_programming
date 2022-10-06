#include <stdio.h>

/**
 * main - program that prints the arguments passed to it        
 * @argc: count of number of arguments passed
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0)
}
