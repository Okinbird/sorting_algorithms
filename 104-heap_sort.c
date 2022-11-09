#include "sort.h"


/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
int tmp;

tmp = *b;
*b = *a;
*a = tmp;
}


/**
 * heapify - Recursive function to sort binary tree
 * @array: array to be sorted as binary tree
 * @end: Last node in binary tree
 * @start: First node of binary tree
 * @size: Size of the array to sort
 * Return: 0
 */
void heapify(int *array, int end, int start, size_t size)
{
int max = start;
int left = 2 * start + 1;
int right = 2 * start + 2;

if (!array || size < 2)
return;

if (left < end && array[left] > array[max])
max = left;

if (right < end && array[right] > array[max])
max = right;

if (start != max)
{
swap(&array[start], &array[max]);
print_array(array, size);
heapify(array, end, max, size);
}
}

/**
 * heap_sort - Sort an array of integers in ascending
 *             order using the heap sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the sift-down heap sort
 * algorithm. Prints the array after each swap.
 */
void heap_sort(int *array, size_t size)
{
int i;

if (!array || size < 2)
return;

for (i = size / 2; i >= 0; i--)
heapify(array, size, i, size);
for (i = size - 1; i >= 0; i--)
{
swap(&array[i], &array[0]);
if (i != 0)
print_array(array, size);
heapify(array, i, 0, size);
}
}
