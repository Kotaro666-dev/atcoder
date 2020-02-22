#include <stdio.h>

int main(void)
{
    int N;      //参加人数
    int X[100]; //参加人数の座標
    int i, max_coordinate = 0;
    int consumed_energy, at_point;
    int sum[100], min;

    // input the data
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    // find max coordinate
    for (i = 0; i < N; i++)
    {
        if (max_coordinate < X[i])
            max_coordinate = X[i];
    }
    // printf("max = %d\n", max_coordinate);

    for (i = 0; i < 100; i++)
    {
        sum[i] = 0;
    }

    //
    for (at_point = 1; at_point <= max_coordinate; at_point++)
    {
        consumed_energy = 0;
        for (i = 0; i < N; i++)
        {
            consumed_energy = (X[i] - at_point) * (X[i] - at_point);
            sum[at_point - 1] += consumed_energy;
        }
    }

    // for (i = 0; i < max_coordinate; i++)
    // {
    //     printf("sum[%d] = %d\n", i, sum[i]);
    // }

    // find minimum sum
    min = sum[0];
    for (i = 0; i < max_coordinate; i++)
    {
        if (min > sum[i])
            min = sum[i];
    }
    printf("%d", min);
    return (0);
}