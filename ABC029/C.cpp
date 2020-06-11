/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 15:26:07 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/11 18:03:14 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 再帰的に解くことができる

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

void f(int rest, string s)
{
    if (rest == 0)
    {
        cout << s << endl;
    }
    else
    {
        for (char c = 'a'; c <= 'c'; c++)
        {
            f(rest - 1, s + c);
        }
    }
}

int main(void)
{
    int N;
    cin >> N;
    f(N, "");
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     // ll ans = pow(3, N);
//     // cout << ans << endl;
//     char a = 'a';

//     if (N == 1)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             printf("%c\n", a + i);
//         }
//     }
//     else if (N == 2)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 printf("%c%c\n", a + i, a + j);
//             }
//         }
//     }
//     else if (N == 3)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 for (int k = 0; k < 3; k++)
//                 {
//                     printf("%c%c%c\n", a + i, a + j, a + k);
//                 }
//             }
//         }
//     }
//     else if (N == 4)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 for (int k = 0; k < 3; k++)
//                 {
//                     for (int l = 0; l < 3; l++)
//                     {
//                         printf("%c%c%c%c\n", a + i, a + j, a + k, a + l);
//                     }
//                 }
//             }
//         }
//     }
//     else if (N == 5)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 for (int k = 0; k < 3; k++)
//                 {
//                     for (int l = 0; l < 3; l++)
//                     {
//                         for (int m = 0; m < 3; m++)
//                         {
//                             printf("%c%c%c%c%c\n", a + i, a + j, a + k, a + l, a + m);
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     else if (N == 6)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 for (int k = 0; k < 3; k++)
//                 {
//                     for (int l = 0; l < 3; l++)
//                     {
//                         for (int m = 0; m < 3; m++)
//                         {
//                             for (int n = 0; n < 3; n++)
//                             {
//                                 printf("%c%c%c%c%c%c\n", a + i, a + j, a + k, a + l, a + m, a + n);
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     else if (N == 7)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 for (int k = 0; k < 3; k++)
//                 {
//                     for (int l = 0; l < 3; l++)
//                     {
//                         for (int m = 0; m < 3; m++)
//                         {
//                             for (int n = 0; n < 3; n++)
//                             {
//                                 for (int o = 0; o < 3; o++)
//                                 {
//                                     printf("%c%c%c%c%c%c%c\n", a + i, a + j, a + k, a + l, a + m, a + n, a + o);
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     else
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 for (int k = 0; k < 3; k++)
//                 {
//                     for (int l = 0; l < 3; l++)
//                     {
//                         for (int m = 0; m < 3; m++)
//                         {
//                             for (int n = 0; n < 3; n++)
//                             {
//                                 for (int o = 0; o < 3; o++)
//                                 {
//                                     for (int p = 0; p < 3; p++)
//                                     {
//                                         printf("%c%c%c%c%c%c%c%c\n", a + i, a + j, a + k, a + l, a + m, a + n, a + o, a + p);
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     return (0);
// }
