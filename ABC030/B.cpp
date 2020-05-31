/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 19:39:33 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/31 19:53:52 by kkamashi         ###   ########.fr       */
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
    std::cout << std::fixed << std::setprecision(5);
    int h, m;
    cin >> h >> m;

    if (h > 12)
    {
        h = h - 12;
    }
    double shorter = (h * 30.0) + (m * 0.5);
    double longer = m * 6.0;

    double ans = abs(shorter - longer);
    if (ans > 180.0)
    {
        ans = 360.0 - ans;
    }
    cout << ans << endl;
    return (0);
}