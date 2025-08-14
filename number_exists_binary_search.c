#include <stdio.h>

int Exists(int array[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == target)
            return 1;
        else if (array[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int main()
{
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 8;

    if (Exists(array, size, target))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
