#include <stdio.h>

int main(void)
{
    int N, R;

    scanf("%d %d", &N, &R);

    if (N >= 10)
    {
        printf("%d", R);
    }
    else
    {
        R = R + 100 * (10 - N);
        printf("%d", R);
    }
    return (0);
}