#include <stdio.h>

int main()
{
    char S;
    scanf(" %c", &S);
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        int X;
        scanf("%d", &X);
        for (int j = 1; j <= X; j++)
        {
            printf("%c", S);
        }
        printf("\n");
    }
    return 0;
}
