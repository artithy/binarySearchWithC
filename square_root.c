#include <stdio.h>

int main()
{
    int x = 40;
    int low = 1, high = x, ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid == x)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Square root of %d = %d\n", x, ans);

    return 0;
}
