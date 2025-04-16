#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N == 0 || N == 1)
    {
        printf("NO\n");
        return 0;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}