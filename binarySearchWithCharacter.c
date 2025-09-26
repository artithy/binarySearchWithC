#include <stdio.h>

int main()
{
    char A[] = {'a', 'c', 'd', 'e', 'g', 'k', 'm'};
    char target = 'A';
    int low = 0, high = sizeof(A) / sizeof(A[0]) - 1;
    int found = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        printf("Low: %d, High: %d, Mid: %d, A[Mid]: %c\n", low, high, mid, A[mid]);

        if (A[mid] == target)
        {
            printf("Element %c found at index %d\n", target, mid);
            found = 1;
            break;
        }
        else if (A[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        printf("Element %c not found in the array\n", target);
    }

    return 0;
}
