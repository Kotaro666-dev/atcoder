#include <stdio.h>

/*--- 異なるn個からr個の整数を取り出す組み合わせの数を返す ---*/
// 参照サイト：http://zhi-ma.hatenablog.com/entry/2013/10/10/090601
int combination(int n, int r)
{
    if (r == 0 || r == n)
        return (1);
    else if (r == 1)
        return (n);
    return (combination(n - 1, r - 1) + combination(n - 1, r));
}

int main(void)
{
    unsigned long int n;
    unsigned long int a, b;
    unsigned long int pattern[n + 1];
    unsigned long int i;
    unsigned long int sum = 0;

    scanf("%ld %ld %ld", &n, &a, &b);

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
    printf("%ld", sum);
    return (0);
}