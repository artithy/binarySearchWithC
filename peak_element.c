#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }

    printf("A peak element is %d\n", arr[low]);
    return 0;
}
