/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:57:08 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/15 09:43:58 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int X, N;
    cin >> X >> N;

    if (N == 0)
    {
        printf("%d\n", X);
        return (0);
    }

    vector<int> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    int temp = INF;
    int mn = INF;
    int ans;
    bool ok = false;
    for (int i = 0; i <= 101; i++)
    {
        ok = false;
        for (int j = 0; j < N; j++)
        {
            if (i == p[j])
            {
                break;
            }
            if (j == N - 1)
            {
                // printf("num = %d\n", i);
                ok = true;
            }
        }
        if (ok == true)
        {
            temp = abs(i - X);
            if (temp < mn)
            {
                mn = temp;
                ans = i;
            }
        }
    }
    cout << ans << endl;
    return (0);
}

// int main(void)
// {
//     int X, N;
//     cin >> X >> N;

//     if (N == 0)
//     {
//         printf("%d\n", X);
//         return (0);
//     }

//     vector<int> p(N);
//     bool isX = true;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> p[i];
//         if (p[i] == X)
//         {
//             isX = false;
//         }
//     }
//     if (isX == true)
//     {
//         printf("%d\n", X);
//         return (0);
//     }

//     sort(p.begin(), p.end());

//     // ++
//     int temp = X + 1;
//     int right;
//     bool found = false;
//     while (true)
//     {
//         for (int i = 0; i < N; i++)
//         {
//             if (p[i] == temp)
//             {
//                 break;
//             }

//             if (i == N - 1)
//             {
//                 right = temp;
//                 found = true;
//                 break;
//             }
//         }
//         if (found == true)
//         {
//             break;
//         }
//         temp++;
//     }

//     // --
//     temp = X - 1;
//     int left;
//     found = false;
//     while (true)
//     {
//         for (int i = 0; i < N; i++)
//         {
//             if (p[i] == temp)
//             {
//                 break;
//             }

//             if (i == N - 1)
//             {
//                 left = temp;
//                 found = true;
//                 break;
//             }
//         }
//         if (found == true)
//         {
//             break;
//         }
//         temp--;
//     }

//     if (abs(X - right) < abs(X - left))
//     {
//         printf("%d\n", right);
//     }
//     else
//     {
//         printf("%d\n", left);
//     }
//     return (0);
// }