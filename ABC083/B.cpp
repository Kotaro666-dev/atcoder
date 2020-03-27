/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 10:58:18 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/27 11:20:50 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, A, B;
    cin >> N >> A >> B;

    int temp, sum = 0;
    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i < 10)
        {
            sum = i;
            if (sum >= A && sum <= B)
            {
                // printf("%d\n", i);
                ans += sum;
            }
        }
        else
        {
            sum = 0;
            temp = i;
            while (temp > 9)
            {
                sum += temp % 10;
                temp = temp / 10;
            }
            // printf("temp[%d] = %d\n", i, temp);
            sum += temp;
            // printf("sum[%d] = %d\n", i, sum);
            if (sum >= A && sum <= B)
            {
                // printf("%d\n", i);
                ans += i;
            }
        }

        // temp = i;
        // while (temp > 9)
        // {
        //     temp = temp / 10;
        //     sum += temp % 10;
        // }
        // if (sum >= A && sum <= B)
        // {
        //     printf("%d\n", sum);
        //     ans += sum;
        // }
    }
    cout << ans << endl;
    return (0);
}