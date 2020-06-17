/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 11:48:08 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/17 14:02:52 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

const ll divider = 1000000007;

// dpで解くべし

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> oks(N + 1, true);
    int num;
    for (int i = 0; i < M; i++)
    {
        cin >> num;
        oks[num] = false;
    }

    vector<ll> dp(N + 1);
    dp[0] = 1;
    for (int now = 0; now < N; now++)
    {
        for (int next = now + 1; next <= min(N, now + 2); next++)
        {
            if (oks[next])
            {
                dp[next] += dp[now];
                dp[next] %= divider;
            }
        }
    }

    // for (int i = 0; i < N + 1; i++)
    // {
    //     printf("%d = %d\n", i, dp[i]);
    // }

    cout << dp[N] << endl;
}

// ll factorial(ll num)
// {
//     ll result = 1;
//     for (ll i = 1; i <= num; i++)
//     {
//         result *= i;
//     }
//     return (result);
// }

// ll calc_pattern(ll one, ll two)
// {
//     ll upper = factorial(one + two);
//     ll lower = factorial(one) * factorial(two);
//     return (upper / lower);
// }

// int main(void)
// {
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(M + 1);
//     a[0] = 0;
//     for (int i = 1; i < M + 1; i++)
//     {
//         cin >> a[i];
//     }
//     a.push_back(N);

//     // debug
//     // for (int i = 0; i < M + 2; i++)
//     // {
//     //     printf("%d ", a[i]);
//     // }
//     // printf("\n");

//     // 例外処理
//     int diff;
//     for (int i = 2; i < M + 1; i++)
//     {
//         diff = a[i] - a[i - 1];
//         if (diff == 1)
//         {
//             printf("0\n");
//             return (0);
//         }
//     }

//     //　各区間の通り数を数える。最終的に、各区間の掛け算がtotalの通り数
//     ll ans = 1;
//     int distance;
//     ll cnt;
//     for (int i = 1; i < M + 2; i++)
//     {
//         distance = a[i] - a[i - 1] - 1;
//         // printf("%d ", distance);
//         cnt = 0;
//         if (distance > 0)
//         {
//             for (int two = 0; two <= distance / 2; two++)
//             {
//                 int one = distance - two * 2;
//                 if (one * 1 + two * 2 == distance)
//                 {
//                     cnt += calc_pattern(one, two);
//                 }
//             }
//         }
//         // printf("cnt = %d\n", cnt);
//         if (cnt != 0)
//         {
//             ans *= cnt;
//             ans %= divider;
//         }
//         // printf("ans = %ld\n", ans);
//     }
//     cout << ans << endl;
//     return (0);
// }