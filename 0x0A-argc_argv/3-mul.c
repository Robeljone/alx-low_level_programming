#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: sum
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int total;
if (argc < 0)
{
print ("%s\ln",Error);
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
total = num1 * num2;
print ("%d\n", total);
return (0);
}
