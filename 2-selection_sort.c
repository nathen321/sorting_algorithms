#include "sort.h"
/**
 * selection_sort - ...........
 * @size: .......
 * @array: .....
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, i = 0;
	int swap, q = 0, tmp = 0;

	if (!array || !size)
		return;
	while (i < size)
	{
		tmp = i;
		for (idx = i + 1; idx < size; idx++)
		{
			if (array[tmp] > array[idx])
			{
				tmp = idx;
				q = 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (q != 0)
		{
			print_array(array, size);
			q = 0;
		}
		i++;
	}
}
