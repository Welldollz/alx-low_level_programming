#include <stdio.h>
/**
 * main - A program that prints the size of various  computer types
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %1u bytes(s)\n", sizeof(a));
printf("Size of an int: %1u bytes(s)\n", sizeof(b));
printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %1u byte(s)\n", sizeof(f));
return (0);
}
