/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 09:58:56 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/24 10:14:56 by kkamashi         ###   ########.fr       */
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
    double m;
    cin >> m;

    double km = m / 1000.0;
    int vv = 0;
    if (km > 70)
    {
        vv = 89;
    }
    else if (km >= 35 && km <= 70)
    {
        vv = ((km - 30) / 5) + 80;
    }
    else if (km >= 6 && km <= 30)
    {
        vv = km + 50;
    }
    else if (km >= 0.1 && km <= 5)
    {
        vv = km * 10;
    }
    else
    {
        vv = 0;
    }

    if (vv >= 100)
    {
        vv = vv % 100;
    }

    string ans;
    if (vv >= 0 && vv <= 9)
    {
        cout << '0';
        cout << vv;
        cout << endl;
    }
    else
    {
        ans = to_string(vv);
        cout << ans << endl;
    }
    return (0);
}