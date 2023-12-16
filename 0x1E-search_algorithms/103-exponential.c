#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    if (size == 0)
        return -1;

    if (array[0] == value)
    {
        printf("Value checked array[0] = [%d]\n", array[0]);
        return 0;
    }

    size_t i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    size_t low = i / 2;
    size_t high = (i < size) ? i : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    return binary_search(array, low, high, value);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index for the binary search
 * @high: Ending index for the binary search
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not present
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
    while (low <= high)
    {
        size_t mid = (low + high) / 2;

        printf("Searching in array: ");
        for (size_t i = low; i <= high; ++i)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
