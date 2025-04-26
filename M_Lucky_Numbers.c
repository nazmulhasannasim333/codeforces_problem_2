#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;

    for (int i = A; i <= B; i++)
    {
        int isLucky = 1;
        int number = i;

        while (number > 0)
        {
            int digit = number % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = 0;
                break;
            }
            number /= 10;
        }

        if (isLucky)
        {
            if (found)
            {
                printf(" ");
            }
            printf("%d", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    printf("\n");
    return 0;
}