#include <stdio.h>

/**
 * main - program that prints the number of arguments passed in it
 * @argc: count of number of arguments passed
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
