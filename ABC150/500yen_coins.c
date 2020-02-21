#include <stdio.h>
#define MONEY 500

int main(void)
{
    int K; // 持ってる500円玉の数
    int X; // 総額

    scanf("%d %d", &K, &X);
    if (MONEY * K >= X)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return (0);
}