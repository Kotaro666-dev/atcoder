#include <stdio.h>

int find_num_ABC(char *string, int length)
{
    int ans = 0, checker = 3;
    int i;

    for(i = 0; i < length; i++)
    {
        if (string[i] != 'A')
        {
            continue;
        }
        if (string[i] == 'A' && 
            string[i + 1] == 'B' && 
            string[i + 2] == 'C')
        {
            checker = 0;
        }
        if (checker == 0)
        {
            // printf("%d%d%d\n", i, i+1, i+2);
            // printf("%c%c%c\n", string[i], string[i+1], string[i+2]);
            ans++;
            checker = 3;
            i += 2;
        }
    }
    return (ans); 
}

int main(void)
{
    int N;      // length of array
    char S[51]; // array of random strings
    int i, counter = 0;

    // initialization of array S
    // for (i = 0; i < 51; i++)
    // {
    //     S[i] = '\0';
    // }

    scanf("%d", &N);
    for (i = -1; i < N; i++)
    {
        scanf("%c", &S[i]);
    }
    S[i] = '\0';

    // Check if the input was successful
    // printf("\n----TEST----\n");
    // for (i = -1; i < N; i++)
    // {
    //     printf("%c", S[i]);
    // }
    counter = find_num_ABC(S, N);
    printf("%d", counter);

    return (0);
}