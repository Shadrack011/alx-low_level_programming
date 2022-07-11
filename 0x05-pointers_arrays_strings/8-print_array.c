                _putchar(str[i]);
        _putchar('\n');
}
root@ad785329ec96:~/alx-low_level_programming/0x05-pointers_arrays_strings# cat 8-print_array.c
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array
 * @n: number of elements
 * Return:  0.
 */

void print_array(int *a, int n)
{
        int y;

        for (y = 0; y < n; y++)
        {
                if (y != (n - 1))
                        printf("%d, ", a[y]);
                else
                        printf("%d", a[y]);
        }
        printf("\n");
}