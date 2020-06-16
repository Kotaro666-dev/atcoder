/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 20:12:49 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/16 21:19:53 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DP問題
// 参考サイト：https://qiita.com/hkrutknouch/items/7269e64af5c1804cffb6

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    int NG1, NG2, NG3;
    cin >> NG1 >> NG2 >> NG3;
    if (N == NG1 || N == NG2 || N == NG3)
    {
        printf("NO\n");
        return (0);
    }

    vector<int> dp(N + 10, 100000);
    dp[N] = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        if (i == NG1 || i == NG2 || i == NG3)
        {
            continue;
        }
        dp[i] = min({dp[i + 1], dp[i + 2], dp[i + 3]}) + 1;
        // printf("%d = %d\n", dp[i], i);
    }

    if (dp[0] > 100)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return (0);
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> NG(3);
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> NG[i];
//         if (NG[i] == N)
//         {
//             printf("NO\n");
//             return (0);
//         }
//     }

//     string ans;

//     if (N == 300)
//     {
//         // only 3;
//         ans = "YES";
//         for (int i = 0; i < 3; i++)
//         {
//             if (NG[i] % 3 == 0)
//             {
//                 ans = "NO";
//                 break;
//             }
//         }
//         cout << ans << endl;
//         return (0);
//     }

//     sort(NG.begin(), NG.end(), greater<int>());
//     int cnt = 100;
//     int diff;
//     while (cnt > 0)
//     {
//         if (N > NG[0])
//         {
//             diff = N - NG[0];
//             if (diff % 3 != 0)
//             {
//                 N -= diff / 3;
//                 cnt -= diff / 3;
//             }
//             else
//             {
//                 N -= (diff - 2) / 3;
//                 N -= (diff - 2) / 3;
//             }
//         }
//         if (N > NG[1])
//         {
//             diff = N - NG[1];
//             if (diff % 3 != 0)
//             {
//                 N -= diff / 3;
//                 cnt -= diff / 3;
//             }
//             else
//             {
//                 N -= (diff - 2) / 3;
//                 N -= (diff - 2) / 3;
//             }
//         }

//         cnt--;
//     }

//     if (N == 0)
//     {
//         ans = "YES";
//     }
//     else
//     {
//         ans = "NO";
//     }
//     cout << ans << endl;
//     return (0);
// }