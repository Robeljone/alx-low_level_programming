#include <stdio.h>
/**
 * main - print all arguments
 * @argc: length of the argument
 * @argv: string
 * Return: name of file
 */
int main(int argc, char *argv[])
{
int counter;
for(counter=0; counter<argc; counter++)
printf("argv[%2d]: %s\n",counter,argv[counter]);
return 0;
}
