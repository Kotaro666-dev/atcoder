#include <stdio.h>

int get_first_digit(int num)
{
    int first;

    if (num < 10)
    {
        first = num;
    }
    else // if (10 <= num)
    {
        while (10 <= num)
        {
            num = num / 10;
        }
        first = num;
    }
    return (first);
}

int get_last_digit(int num)
{
    int last;

    if (num < 10)
    {
        last = num;
    }
    else // if (10 < num)
    {
        last = num % 10;
    }
    return (last);
}

int main(void)
{
    int N;
    int i, i_first, i_last;
    int j, j_first, j_last;
    int freq = 0;

    scanf("%d", &N);
    // printf("first = %d, last = %d\n", get_first_digit(N), get_last_digit(N));
    for (i = 0; i <= N; i++)
    {
        // ０はカウントしないため、スキップさせる
        if (i == 0)
        {
            i++;
        }
        for (j = 0; j <= N; j++)
        {
            // ０はカウントしないため、スキップさせる
            if (j == 0)
            {
                j++;
            }
            // iの先頭と末尾の数字を取り出す
            i_first = get_first_digit(i);
            i_last = get_last_digit(i);

            // ｊの先頭と末尾の数字をと取り出す
            j_first = get_first_digit(j);
            j_last = get_last_digit(j);

            if (i < 10 && j < 10) // ex(i = 9, j = 9)
            {
                if (i == j)
                {
                    // printf("(%d, %d),", i, j);
                    freq++;
                }
            }
            else if (i < 10 && 10 <= j) // ex(i = 9, j = 999)
            {
                if (i_first == j_first && i_first == j_last)
                {
                    // printf("(%d, %d),", i, j);
                    freq++;
                }
            }
            else if (10 <= i && 10 <= j) // ex(i = 999, j == 99)
            {
                if (i_last == j_first && i_first == j_last)
                {
                    // printf("(%d, %d),", i, j);
                    freq++;
                }
            }
            else if (10 <= i && j < 10) //ex(i = 999, j = 9)
            {
                if (i_first == j_first && i_last == j_first)
                {
                    // printf("(%d, %d),", i, j);
                    freq++;
                }
            }
        }
    }
    printf("%d", freq);
    return (0);
}