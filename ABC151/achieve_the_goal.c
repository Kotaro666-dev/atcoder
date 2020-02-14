#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;      // 受けるテストの科目数
    int K;      // 各テストの満点の値
    int M;      // N科目のテストの平均点を上回るのに必要な値
    int A[100]; // N -　1科目のテストの点数が入る配列
    int i, sum = 0, x_score = 0;

    scanf("%d %d %d", &N, &K, &M);
    for (i = 0; i < N - 1; i++)
    {
        scanf("%d", &A[i]);
    }

    // 解の案
    // (8+10+3+6+x)/5 = 7
    // (27 + x)/5 = 7
    // 27 + x = 35
    // x = 35 - 27
    // x = 8
    for (i = 0; i < N - 1; i++)
    {
        sum = sum + A[i];
    }
    
    x_score = (M * N) - sum;
    
    // X(最後のテスト)で0点でも大丈夫なとき
    if (x_score < 0)
    {
        x_score = 0;
    }
    // X(最後のテスト)で挽回できないとき
    else if (K < abs(x_score))
    {
        x_score = -1;
    }
    printf("%d", x_score);
    return (0);
}