/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 12:00:38 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/15 13:55:23 by kkamashi         ###   ########.fr       */
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
    int n;

    cin >> n;

    int diff;
    int remain;
    int ans;
    int total = 0;

    ans = INF;
    int x, y;
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n / 2; y++)
        {
            if (x * y <= n)
            {
                diff = abs(x - y);
                remain = n - (x * y);
                total = diff + remain;
            }
            if (ans > total)
            {
                ans = total;
            }
        }
    }
    cout << ans << endl;
    return (0);
}