#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void swap(unsigned int *a, unsigned int *b)
// {
//     unsigned int temp;

//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

/* 
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
*/

int main(void)
{
    unsigned int N;
    unsigned int A[200000];
    unsigned long int B[100000000];
    unsigned int i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < N; i++)
    {
        B[A[i]]++;
        if (B[A[i]] > 1)
        {
            printf("NO");
            return (0);
        }
    }
    printf("YES");
    return (0);

    /*
    // Sort function
    qsort(A, counter, sizeof(int), compare_int);
    
    for (i = 0; i < N; i++)
    {
        if (A[i + 1] != '\0' && A[i] == A[i + 1])
        {
            printf("NO");
            return (0);
        }
    }
    printf("YES");
    return (0);
    */

    /*
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        B[A[i]] = B[A[i]] + 1;
        if (B[A[i]] > 1)
        {
            printf("NO");
            return (0);
        }
    }

    printf("YES");
    return (0);
    */

    // for (i = 0; i < N; i++)
    // {
    //     scanf("%d", &A[i]);
    //     // if (i != 0)
    //     // {
    //     //     for (j = i - 1; j < i; j--)
    //     //     {
    //     //         // printf("%d = %d, %d = %d\n", i, A[i], j, A[j]);
    //     //         if (A[i] == A[j])
    //     //         {
    //     //             printf("NO");
    //     //             return (0);
    //     //         }
    //     //     }
    //     // }
    // }

    /* 
    j = 1;
    for (i = 0; i < j; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (A[i] == A[j])
            {
                printf("NO");
                return (0);
            }
        }
    }
    printf("YES");
    return (0);
    */
    /* 
    // Bubble sort
    for (i = 0; i < N - 1; i++)
    {
        for (j = N - 1; j > i; j--)
        {
            if (A[j] < A[j - 1])
                swap(&A[j], &A[j - 1]);
        }
    }

    for (i = 0; i < N; i++)
    {
        if (A[i + 1] != '\0' && A[i] == A[i + 1])
        {
            printf("NO");
            return (0);
        }
    }
    printf("YES");
    return (0);
    */
}