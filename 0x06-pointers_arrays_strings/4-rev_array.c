#include "main.h"

/**
 * reverse_array - reverses the content of an array of an interger
 *
 * @a: parameter Array
 * @n: number of element of the array
 */
void reverse_array(int *a, int n)
{
	int q;
	int count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		q = a[count];
		a[count++] = a[n];
		a[n--] = q;
	}
}
