#include <stdio.h>

int get_head(int num)
{
    int head;

    if (num < 10)
    {
        head = num;
    }
    else // if (10 <= num)
    {
        while (10 < num)
        {
            num = num / 10;
        }
        head = num;
    }
    return (head);
}

int get_tail(int num)
{
    int tail;

    if (num < 10)
    {
        tail = num;
    }
    else // if (10 < num)
    {
        tail = num % 10;
    }
    return (tail);
}

int main(void)
{
    int N;
    int i, i_head, i_tail;
    int j, j_head, j_tail;
    int counter = 0;

    scanf("%d", &N);
    printf("head = %d, tail = %d\n", get_head(N), get_tail(N));
    for (i = 0; i <= N; i++)
    {
        if (i == 0)
        {
                i++;
        }
        for (j = 0; j <= N; j++)
        {
            if (j == 0)
            {
                j++;
            }
            // iの先頭と末尾の数字を取り出す
            i_head = get_head(i);
            i_tail = get_tail(i);

            // ｊの先頭と末尾の数字をと取り出す
            j_head = get_head(j);
            j_tail = get_tail(j);

            if (i < 10 && j < 10) // ex: i = 9, j = 9
            {
                if (i == j)
                {
                    printf("(%d, %d),", i, j);
                    counter++;
                }
            }
            else if (i < 10 && 10 <= j) // ex: i = 9, j = 999
            {
                if (i_head == j_head && i_head == j_tail)
                {
                    printf("(%d, %d),", i, j);
                    counter++;
                }
            }
            else if (10 <= i && 10 <= j) // i = 999, j == 99
            {
                if (i_tail == j_head && i_head == j_tail)
                {
                    printf("(%d, %d),", i, j);
                    counter++;
                }
            }
            else if (10 <= i && j < 10)
            {
                if (i_head == j_head && i_tail == j_head)
                {
                    printf("(%d, %d),", i, j);
                    counter++;
                }
            }
        }
    }
    printf("%d", counter);
    return (0);
}