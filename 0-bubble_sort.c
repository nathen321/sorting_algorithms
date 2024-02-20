#include "sort.h"
/**
 * bubble_sort - .........
 * @array: array
 * @size: array size
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, idx = 0, tmp = 0;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		for (idx = 0; idx < size - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
			tmp = array[idx];
			array[idx] = array[idx + 1];
			array[idx + 1] = tmp;
			print_array(array, size);
			}
		}
		i++;
	}
}
