#include <stdio.h>

int SearchInsert(int array[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == target)
            return mid;
        else if (array[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

int main()
{
    int array[] = {1, 3, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 2;

    int pos = SearchInsert(array, size, target);

    printf("Insert position for %d is index %d\n", target, pos);

    return 0;
}
