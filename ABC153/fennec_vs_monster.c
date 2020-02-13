#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main(void)
{
    unsigned int N; // the number of monsters
    unsigned int K; // the number of special move
    unsigned int H[200000]; // life point of monsters
    unsigned int i;
    long int attack = 0;
    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &H[i]);
    }
    // Sorting array by ascending order by quick sort library
    qsort(H, N, sizeof(int), compare_int);
    // for (i = 0; i < N; i++)
    //     {
    //         printf("%d ", H[i]);
    //     }
    for (i = K; i < N; i++)
    {
        // printf("H[%d] = %d\n", i, H[i]);
        attack = attack + H[i];
    }
    printf("%ld", attack);
    return (0);
}