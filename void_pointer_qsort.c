#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int first = *(const int *)a;
    int second = *(const int *)b;

    return first - second;
}

int main()
{
    int numbers[] = {45, 12, 78, 23, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, size, sizeof(int), compare);

    printf("Sorted array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
