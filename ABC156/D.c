#include <stdio.h>

/*--- 異なるn個からr個の整数を取り出す組み合わせの数を返す ---*/
// 参照サイト：http://zhi-ma.hatenablog.com/entry/2013/10/10/090601
int combination(long long int n, long long int r)
{
    if (r == 0 || r == n)
        return (1);
    else if (r == 1)
        return (n);
    return (combination(n - 1, r - 1) + combination(n - 1, r));
}

int main(void)
{
    long long int n;
    long long int a, b;
    long long int pattern[n + 1];
    long long int i;
    long long int sum = 0;

    scanf("%lld %lld %lld", &n, &a, &b);

    for (i = 0; i < n + 1; i++)
    {
        if (i >= 2 && (i != a && i != b))
        {
            pattern[i] = combination(n, i);
            // printf("pattern[%d] = %d\n", i, pattern[i]);
            sum += pattern[i];
        }
    }
    sum %= (1000000000 + 7);
    printf("%lld", sum);
    return (0);
}