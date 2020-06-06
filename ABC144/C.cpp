/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 18:20:55 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 19:32:59 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 約数列挙の問題
// 参考サイト：https://qiita.com/drken/items/a14e9af0ca2d857dad23

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    ll N;
    cin >> N;

    ll move = 0;
    ll ans = N - 1;
    ll j;
    for (ll i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            j = N / i;
            move = i + j - 2;
            ans = min(ans, move);
        }
    }
    cout << ans << endl;
    return (0);
}