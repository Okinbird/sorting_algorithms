#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0, z = 0, c = 0;
int counter = 0, tmp = 0;

if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size; i++)
{
counter = 0;
tmp = array[i];
for (z = i + 1; z < size; z++)
{
if (tmp > array[z])
{
tmp = array[z];
c = z;
counter++;
}
}
if (counter == 0)
continue;
array[c] = array[i];
array[i] = tmp;
print_array(array, size);
}
}
