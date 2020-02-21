#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main(void)
{
    int N;
    char S[200000][11];
    int array_length;
    int counter, max;
    int i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", S[i]);
    }
    array_length = i;

    // Sorting by alphabetical order
    qsort(S, array_length, sizeof(S[0]), compare_strings);

    // Checking the sorted input
    // printf("--Sorted input--\n");
    // for (i = 0; i < N; i++)
    // {
    //     for (j = 0; S[i][j] != '\0'; j++)
    //     {
    //         printf("%c", S[i][j]);
    //     }
    //     printf("\n");
    // }

    // Couting words by strcmp by neighbours
    counter = 1;
    max = 0;
    for (i = 0; i < N - 1; i++)
    {
        if (strcmp(S[i], S[i + 1]) == 0)
        {
            counter++;
        }
        else
        {
            counter = 1;
        }

        if (max < counter)
        {
            max = counter;
        }
    }

    counter = 1;
    for (i = 0; i < N; i++)
    {
        if (strcmp(S[i], S[i + 1]) == 0)
        {
            counter++;
        }
        else
        {
            counter = 1;
        }

        if (counter == max)
        {
            printf("%s\n", S[i]);
        }
    }
    return (0);
}