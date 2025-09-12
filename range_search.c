#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low_val = 12;
    int high_val = 28;
    int left = 0, right = n - 1;
    int count = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] >= low_val && arr[mid] <= high_val)
        {
            count++;
            int l = mid - 1;
            while (l >= 0 && arr[l] >= low_val)
            {
                count++;
                l--;
            }
            int r = mid + 1;
            while (r < n && arr[r] <= high_val)
            {
                count++;
                r++;
            }
            break;
        }
        else if (arr[mid] < low_val)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Number of elements in range [%d, %d] = %d\n", low_val, high_val, count);
    return 0;
}
