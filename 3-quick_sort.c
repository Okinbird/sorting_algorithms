#include "sort.h"


/**
 * swaper - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swaper(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * partitioner - Defines array partition
 * @array: The array of integers to 
 * @start: Start of array to part
 * @next: Next integer to part
 * @size: The size of the array
 * Return: pivot index
 */

int partitioner(int *array, ssize_t start, ssize_t next, size_t size)
{
int piv = array[next];
ssize_t j = start, i;

for (i = start; i < next; i++)
{
if (array[i] < piv)
{
if (j != i)
{
swaper(&array[j], &array[i]);
print_array(array, size);
}
j++;
}
}
if (next != j && array[next] != array[j])
{
swaper(&array[next], &array[j]);
print_array(array, size);
}
return (j);

}

/**
 * sorter - The quick-sort algorithm through recursion
 * @array: The array of integers to sort
 * @start: Start of array to sort
 * @next: Next integer to sort
 * @size: The size of the array
 *
 * Return: piv index
 */
void sorter(int *array, ssize_t start, ssize_t next, size_t size)
{
if (start < next)
{
int piv = partitioner(array, start, next, size);

sorter(array, start, piv - 1, size);
sorter(array, piv + 1, next, size);
}

}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

sorter(array, 0, size - 1, size);
}
