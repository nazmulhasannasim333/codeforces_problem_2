#include <stdio.h>

// Fail test case, need to resolve the problem - wrong output
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int found = 0;

    for (int i = A; i <= B; i++)
    {
        int num = i;
        int isLucky = 1;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = 0;
                break;
            }
            num /= 10;
        }
        if (isLucky)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    return 0;
}