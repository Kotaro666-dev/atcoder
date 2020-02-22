#include <stdio.h>

int main(void)
{
    int N, K;
    int digit_counter = 0;

    scanf("%d %d", &N, &K);
    while (N != 0)
    {
        N = N / K;
        digit_counter++;
    }
    printf("%d", digit_counter);
    return (0);
}