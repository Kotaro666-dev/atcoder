#include <stdio.h>

int main(void)
{
    long long int H; // the life point of the monster 
    long long int attack = 0;
    long long int temp = 1;
    long long int i;
    
    scanf("%lld", &H);
    if (H > 1)
    {
        attack = 1;
        for (i = 0; H != 1; i++)
        {
            // printf("H:%lld = %lld\n", i, H);
            H = H / 2;
            temp = temp * 2;
            attack = attack + (temp);
            // printf("attack:%lld = %lld\n", i, attack);
        }
    }
    else if (H == 1)
    {
        printf("1");
        return (0);
    }
    printf("%lld", attack);
    return (0);
}