/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:39:14 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/18 11:23:02 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 範囲指定を考えれば、２重ループでも間に合う

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    ll X;
    cin >> X;

    ll A, B;
    for (A = -120; A < 120; A++)
    {
        for (B = -120; B < 120; B++)
        {
            if (pow(A, 5) - pow(B, 5) == X)
            {
                printf("%lld %lld\n", A, B);
                return (0);
            }
        }
    }
    return (0);
}

// int main(void)
// {
//     ll X;
//     cin >> X;

//     if (X == 1)
//     {
//         printf("0 -1\n");
//         return (0);
//     }

//     ll B = -1;
//     ll A = 0;

//     for (A = -118; A <; A++)
//     {
//         if (A * A * A * A * A == X - 1)
//         {
//             break;
//         }
//     }

//     // TLE
//     // while (true)
//     // {
//     //     if (pow(A, 5) == X - 1)
//     //     {
//     //         break;
//     //     }
//     //     A++;
//     // }
//     printf("%lld %lld\n", A, B);
//     return (0);
// }