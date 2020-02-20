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
    char input[10];
    int count = 1, check_if_counted = false;
    int i, j, k;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", input);
        strcpy(S[i], input);
    }
    array_length = i;

    // Sorting by alphabetical order
    qsort(S, array_length, 11, compare_strings);

    // Checking the sorted input
    printf("--Sorted input--\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; S[i][j] != '\0'; j++)
        {
            printf("%c", S[i][j]);
        }
        printf("\n");
    }

    // Couting words by strcmp by neighbours
    for (i = 0; i < N; i++)
    {
        if (strcmp(S[i], S[i + 1]) == 0)
        {
            count++;
            check_if_counted = true;
        }
        else
        {
            count = 1;
            check_if_counted = false;
        }
    }
    return (0);
}