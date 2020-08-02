/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 19:49:38 by kkamashi          #+#    #+#             */
/*   Updated: 2020/08/02 22:14:27 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    int half = N / 2;

    vector<char> c(N);
    int front_white = 0;
    int front_red = 0;
    int back_white = 0;
    int back_red = 0;
    int turn_all_white;
    for (int i = 0; i < N; i++)
    {
        cin >> c[i];
        if (i < half)
        {
            if (c[i] == 'W')
            {
                front_white++;
            }
            else
            {
                front_red++;
            }
        }
        else
        {
            if (c[i] == 'R')
            {
                back_red++;
            }
            else
            {
                back_white++;
            }
        }
    }

    if (front_white == 0 && front_red > 0)
    {
        cout << 0 << endl;
        return (0);
    }

    int ans = 0;
    for (int i = 0; i < half; i++)
    {
        if (c[i] == 'W')
        {
            // まず後ろのRとswap、のちに色変え
            if (back_red > 0)
            {
                back_red--;
                front_white--;
                //　色変え
                ans++;
            }
            // 色変え
            else
            {
                front_white--;
                ans++;
            }
        }
    }

    if (back_red > 0)
    {
        ans += back_red;
    }
    cout << ans << endl;
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     int half = N / 2;
//     // if (N % 2 == 0)
//     // {
//     //     half = N / 2;
//     // }
//     // else
//     // {
//     //     half = N / 2;
//     // }

//     vector<char> c(N);
//     int front_white = 0;
//     int front_red = 0;
//     int back_white = 0;
//     int back_red = 0;

//     for (int i = 0; i < N; i++)
//     {
//         cin >> c[i];
//         if (i < half)
//         {
//             if (c[i] == 'R')
//             {
//                 front_red++;
//             }
//             else
//             {
//                 front_white++;
//             }
//         }
//         else
//         {
//             if (c[i] == 'R')
//             {
//                 back_red++;
//             }
//             else
//             {
//                 back_white++;
//             }
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (c[i] == 'W')
//         {

//         }
//     }

//     return (0);
// }

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<char> c(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> c[i];
//     }
//     vector<int> left_white(N + 1, 0);
//     left_white[0] = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (c[i] == 'W')
//         {
//             left_white[i + 1] = left_white[i] + 1;
//         }
//         else
//         {
//             left_white[i + 1] = left_white[i];
//         }
//     }

//     vector<int> right_red(N + 1, 0);
//     right_red[0] = 0;
//     int index = N - 1;
//     for (int i = 0; i < N; i++)
//     {
//         if (c[index] == 'R')
//         {
//             right_red[i + 1] = right_red[i] + 1;
//         }
//         else
//         {
//             right_red[i + 1] = right_red[i];
//         }
//         index--;
//     }

//     for (int i = 0; i < N; i++)
//     {
//         cout << left_white[i] << " ";
//     }
//     printf("\n");
//     for (int i = 0; i < N; i++)
//     {
//         cout << right_red[i] << " ";
//     }
//     return (0);
// }
