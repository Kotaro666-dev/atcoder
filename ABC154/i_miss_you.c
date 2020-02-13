#include <stdio.h>

int main(void)
{
    int i;
    char S[101];
    scanf("%s", S);

    for (i = 0; S[i] != '\0'; i++)
    {
        S[i] = 'x';
    }
    printf("%s", S);

    return (0);
}