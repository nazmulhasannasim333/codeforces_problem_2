#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        int isPrime = 1;
        if (i == 0 || i == 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}