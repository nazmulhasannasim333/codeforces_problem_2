#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int current = 1;
    for(int i = 1; i <= N; i++){
        printf("%d %d %d PUM\n", current, current + 1, current + 2);
        current += 4;
    }
    return 0;
}