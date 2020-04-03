/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 12:02:01 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/03 16:49:22 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

/*
Editorial:
もし既に連結なら答えは 0 です。これは |a − b| ≤ W かどうかで判定できます。そうでない場合は、答えは
|a − b| − W になります。

 */

int main(void)
{
    int W, a, b;
    cin >> W >> a >> b;

    int ans;

    // 緑の長方形が赤に触れているとき
    // b点
    if (a <= b && b <= a + W)
    {
        ans = 0;
    }
    // b + W 点
    else if (a <= b + W && b + W <= a + W)
    {
        ans = 0;
    }
    else if (a + W < b)
    {
        ans = abs(b - (a + W));
    }
    else if (b + W < a)
    {
        ans = abs(a - (b + W));
    }
    cout << ans << endl;
    return (0);
}