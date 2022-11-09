#include "sort.h"
#include <limits.h>
#include <stdlib.h>


/**
 * get_max - Get the maximum value in an array of integers.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: The maximum integer in the array.
 */
int get_max(int *array, size_t size)
{
int max = INT_MIN;

while (size--)
if (array[size] > max)
max = array[size];

return (max);
}

/**
 * counting_sort - Sort an array of integers in ascending order
 *                 using the counting sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
int *temp, *cpy, j, max;
size_t i;

if (!array || size < 2)
return;

max = get_max(array, size);
temp = calloc(max + 1, sizeof(*temp));
if (!temp)
return;

cpy = malloc(sizeof(*cpy) * size);
if (!cpy)
{
free(temp);
return;
}

for (i = 0; i < size; i++)
temp[array[i]]++;

for (j = 1; j < max + 1; j++)
temp[j] += temp[j - 1];

print_array(temp, max + 1);

for (i = 0; i < size; i++)
{
temp[array[i]]--;
cpy[temp[array[i]]] = array[i];
}

for (i = 0; i < size; i++)
array[i] = cpy[i];

free(temp);
free(cpy);
}
