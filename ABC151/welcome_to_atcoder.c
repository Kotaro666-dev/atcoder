#include <stdio.h>

#define AC 0
#define WA 1

int main(void)
{
    int N; //問題数
    int M; //提出回数
    int p[100000]; //○問目
    char S[3][10000]; //AC or WA
    int i;

    // ゴミが入っていたので初期化
    p[0] = 0;
    S[0][0] = '\0';

    scanf("%d %d", &N, &M);
    for(i = 0; i < M; i++)
    {
        scanf("%d", &p[i]);
        printf("p[%d] = %d", i, p[i]);
        scanf("%s", S[i]);
    }
    printf("\n");
    // printf("%d", p[0]);
    // for(i = 0; i < M; i++)
    // {
    //     printf("%d %s\n", p[i], S[i]);
    // }

    return (0);

}