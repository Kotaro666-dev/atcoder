/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 18:01:05 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/16 18:58:04 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 参考サイト：https://drken1215.hatenablog.com/entry/2020/01/05/154700
// 二分探索

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    ll A, B, X;
    cin >> A >> B >> X;

    ll left = 0, right = 1e9 + 1;
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;
        if (A * mid + B * to_string(mid).size() > X)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << left << endl;
}

// int main(void)
// {
//     ll A, B, X;
//     cin >> A >> B >> X;

//     ll ans = 0;
//     ll N;
//     for (ll i = 1; i <= 11; i++)
//     {
//         N = (X - (B * i)) / A;
//         if ((N * A + B * i) <= X && to_string(N).size() == i)
//         {
//             ans = max(ans, N);
//         }
//     }
//     if (ans >= 1e9)
//     {
//         ans = 1e9;
//     }
//     cout << ans << endl;
//     return (0);
// }