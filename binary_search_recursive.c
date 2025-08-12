#include <stdio.h>

int BinarySearch(int array[], int target, int low, int high)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (array[mid] == target)
        return mid;
    else if (array[mid] < target)
        return BinarySearch(array, target, mid + 1, high);
    else
        return BinarySearch(array, target, low, mid - 1);
}

int main()
{
    int array[] = {3, 6, 8, 12, 14, 17, 20};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 14;

    int result = BinarySearch(array, target, 0, n - 1);

    if (result != -1)
        printf("Found %d at index %d\n", target, result);
    else
        printf("%d not found in the array\n", target);

    return 0;
}
