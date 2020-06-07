/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 00:21:38 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 00:54:41 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 問題文を誤解
// レートが 3200以上になると色を自由に変えることができます。
// →リストに上がっていない色なんでもOK
// つまり、色の種類数の最大値は無限大

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    vector<bool> color(8, false);
    int red = 0;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (num <= 399)
        {
            color[0] = true;
        }
        else if (num >= 400 && num <= 799)
        {
            color[1] = true;
        }
        else if (num >= 800 && num <= 1199)
        {
            color[2] = true;
        }
        else if (num >= 1200 && num <= 1599)
        {
            color[3] = true;
        }
        else if (num >= 1600 && num <= 1999)
        {
            color[4] = true;
        }
        else if (num >= 2000 && num <= 2399)
        {
            color[5] = true;
        }
        else if (num >= 2400 && num <= 2799)
        {
            color[6] = true;
        }
        else if (num >= 2800 && num <= 3199)
        {
            color[7] = true;
        }
        else
        {
            red++;
        }
    }

    int basic = 0;
    for (int i = 0; i < 8; i++)
    {
        if (color[i] == true)
        {
            basic++;
        }
    }

    int mn = basic;
    if (basic == 0 && red > 0)
    {
        mn = 1;
    }
    int mx = basic + red;
    cout << mn << " " << mx << "\n";
    return (0);
}