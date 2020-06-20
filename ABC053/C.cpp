/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 20:45:13 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/20 10:06:22 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 参考サイト：http://nafmo.hatenablog.jp/entry/2017/03/08/210624#C%E5%95%8F%E9%A1%8CX-Yet-Another-Die-Game%E9%95%B7%E3%81%84%E3%81%A7%E3%81%99

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    ll x;
    cin >> x;

    // 最小回数にするためには、最初が5 -> 6 -> 5 -> 6と続く
    ll ans;
    if (x <= 6)
    {
        ans = 1;
    }
    else if (x > 6 && x <= 11)
    {
        ans = 2;
    }
    else
    {
        ans += x / 11;
        x %= 11;
        if (x == 0)
        {
            ans *= 2;
        }
        else if (x != 0 && x <= 6)
        {
            ans = ans * 2 + 1;
        }
        else
        {
            ans = ans * 2 + 2;
        }

        // if (x % 11 == 0)
        // {
        //     ans = x / 11 * 2;
        // }
        // else
        // {
        //     ans = x / 11 * 2 + 1;
        // }
    }
    cout << ans << endl;
    return (0);
}