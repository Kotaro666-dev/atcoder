/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 09:53:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/13 10:08:24 by kkamashi         ###   ########.fr       */
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
    int L, R;
    cin >> L >> R;

    if (R - L > 3000)
    {
        cout << 0 << endl;
        return (0);
    }

    // (i * j) mod 2019
    // (i mod 2019) * (j mod 2019)

    ll num;
    ll mn = LINF;
    for (ll i = L; i <= R - 1; i++)
    {
        for (ll j = i + 1; j <= R; j++)
        {
            num = (i * j) % 2019;
            mn = min(mn, num);
        }
    }
    printf("%d\n", mn);
    return (0);
}