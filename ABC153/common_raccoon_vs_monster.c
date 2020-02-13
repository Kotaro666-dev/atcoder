#include <stdio.h>

int main(void)
{
    int H, N;
    int A[1000000];
    int i;
    scanf("%d %d", &H, &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        H = H - A[i];
    }
    if (H <= 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return (0);
}