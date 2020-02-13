#include <stdio.h>

int main(void)
{
    int N;
    int P[200000];
    int i, counter = 0, cmp_num = 0;

    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &P[i]);
    }
    for (i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            cmp_num = P[i];
            counter++;
        }
        while (i != 1 && cmp_num > P[i])
        {
            cmp_num = P[i];
            counter++;
        }
    }
    printf("%d", counter);

    return (0);
}