#include <stdio.h>
#include <string.h>

void display_ans(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
}

int main(void)
{
    int a, b;
    char string_a[9];
    char string_b[9];
    int i;
    scanf("%d %d", &a, &b);

    for (i = 0; i < b; i++)
    {
        string_a[i] = a + '0';
    }
    string_a[i] = '\0';

    for (i = 0; i < a; i++)
    {
        string_b[i] = b + '0';
    }
    string_b[i] = '\0';

    if (strcmp(string_a, string_b) > 0)
    {
        display_ans(string_b);
    }
    else if (strcmp(string_a, string_b) < 0)
    {
        display_ans(string_a);
    }
    else if (strcmp(string_a, string_b) == 0)
    {
        display_ans(string_a);
    }
    return (0);
}