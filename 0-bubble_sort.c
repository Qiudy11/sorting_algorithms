#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending order using the
* Bubble sort algorithm
*
* @array: Pointer to the beginning of an array
* @size: The size of the array
*
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
unsigned int i, j, temp;
if (size < 2 || !array)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
