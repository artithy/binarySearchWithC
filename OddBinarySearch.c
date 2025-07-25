#include <stdio.h>

int BinarySearch(int array[], int target)
{
    int i = 0;
    int n = 6;

    while (i <= n)
    {
        int m = (i + n) / 2;

        if (array[m] == target)
            return m;
        else if (array[m] < target)
            i = m + 1;
        else
            n = m - 1;
    }

    return -1;
}

int main()
{
    int array[] = {1, 5, 9, 10, 12, 17, 21};
    int target = 5;

    int result = BinarySearch(array, target);

    if (result != -1)
        printf("Found %d at index %d\n", target, result);
    else
        printf("%d not found in the array\n", target);

    return 0;
}