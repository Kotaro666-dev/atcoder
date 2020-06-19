/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:54:26 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/19 12:13:08 by kkamashi         ###   ########.fr       */
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
    ll X, Y;
    cin >> X >> Y;

    // ll ans = (Y - X) / X;
    ll ans = 0;
    // while (true)
    // {
    //     if (X * pow(2, ans) > Y)
    //     {
    //         break;
    //     }
    //     ans++;
    // }
    while (X <= Y)
    {
        ans++;
        X *= 2;
    }

    cout << ans << endl;
    return (0);
}