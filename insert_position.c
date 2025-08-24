#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            printf("Insert position = %d\n", mid);
            return 0;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Insert position = %d\n", low);
    return 0;
}
