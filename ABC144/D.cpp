/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:59:16 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/18 16:35:56 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://drken1215.hatenablog.com/entry/2020/04/26/193500

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    std::cout << std::fixed << std::setprecision(10);
    double a, b, x;
    cin >> a >> b >> x;

    // 3次元から2次元へ
    x /= a;

    // 数学的な解き方
    // 水の量が全体の半分より多いとき
    if (x > a * b / 2)
    {
        cout << atan2((a * b - x) * 2, a * a) * 180 / PI << endl;
    }
    else
    {
        cout << atan2(b * b, x * 2) * 180 / PI << endl;
    }
    return (0);
}