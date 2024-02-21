#include "sort.h"
/**
 * selection_sort - ...........
 * @size: .......
 * @array: .....
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, i = 0;
	int swap, q = 0;

	if (!array || !size)
		return;
	while (i <= size)
	{
		swap = array[i];
		for (idx = i; idx < size; idx++)
		{
			if (swap > array[idx])
			{
				array[i] = array[idx];
				array[idx] = swap;
				swap = array[i];
				q = 1;
			}
		}
		if (q != 0)
		{
			print_array(array, size);
			q = 0;
		}
		i++;
	}
}
