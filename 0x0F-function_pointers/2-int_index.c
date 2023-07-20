#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 * Return: Nothing.
 */
void print_elem(int elem)
{
printf("%d\n", elem);
}
/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to pr#include "function_pointers.h"
/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
int
*Return : Nothing.
* /
void print_elem_hex(int elem)
{
printf("0x%x\n", elem);
}
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};
array_iterator(array, 5, &print_elem);
array_iterator(array, 5, &print_elem_hex);
return (0);
}
