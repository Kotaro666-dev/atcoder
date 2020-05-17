/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:18:17 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/17 21:44:03 by kkamashi         ###   ########.fr       */
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
    std::cout << std::fixed << std::setprecision(11);
    double A, B, H, M;
    cin >> A >> B >> H >> M;
    double ans;

    double fixedH = H * 5;
    double rest = (5.0 / 60.0);
    if (M != 0)
    {
        rest *= M;
        fixedH += rest;
    }
    // cout << fixedH << endl;
    double kakudo;
    if (fixedH + M >= 60)
    {
        kakudo = 6 * abs(fixedH - M);
    }
    else
    {
        kakudo = 6 * abs((M + 60) - fixedH);
    }
    // cout << kakudo << endl;
    ans = sqrt(A * A + B * B - 2 * A * B * cos(kakudo * PI / 180));
    cout << ans << endl;
    return (0);
}