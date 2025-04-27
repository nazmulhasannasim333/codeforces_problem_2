#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int ones_count = 0;
        int temp = N;
        while (temp > 0)
        {
            ones_count += temp % 2;
            temp /= 2;
        }

        int result = (1 << ones_count) - 1;

        printf("%d\n", result);
    }

    return 0;
}