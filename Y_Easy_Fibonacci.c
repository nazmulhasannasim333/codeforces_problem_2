#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int fib1 = 0, fib2 = 1;

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            printf("%d", fib1);
        }
        else if (i == 2)
        {
            printf(" %d", fib2);
        }
        else
        {
            int fib_next = fib1 + fib2;
            printf(" %d", fib_next);
            fib1 = fib2;
            fib2 = fib_next;
        }
    }

    printf("\n");
    return 0;
}