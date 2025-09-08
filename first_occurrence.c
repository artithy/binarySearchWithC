#include <stdio.h>

int FirstOccurrence(int array[], int size, int target)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int array[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 2;

    int index = FirstOccurrence(array, size, target);

    if (index != -1)
        printf("First occurrence of %d is at index %d\n", target, index);
    else
        printf("%d not found in the array\n", target);

    return 0;
}
