#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[11], T[11], U[11];
    int A = 0, B = 0;
    int i;

    scanf("%s %s", S, T);
    scanf("%d %d", &A, &B);
    scanf("%s", U);

    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] != U[i])
            break;
        else if (S[i + 1] == '\0')
            A = A - 1;
    }
    for (i = 0; T[i] != '\0'; i++)
    {
        if (T[i] != U[i])
            break;
        else if (T[i + 1] == '\0')
            B = B - 1;
    }
    printf("%d %d", A, B);
    return (0);
}