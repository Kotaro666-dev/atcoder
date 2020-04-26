/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 20:58:20 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/26 21:05:48 by kkamashi         ###   ########.fr       */
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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    string ans;
    bool isTakahasi;
    for (;;)
    {
        C = C - B;
        if (C <= 0)
        {
            isTakahasi = true;
            break;
        }
        A = A - D;
        if (A <= 0)
        {
            isTakahasi = false;
            break;
        }
    }

    if (isTakahasi == true)
    {
        ans = "Yes";
    }
    else
    {
        ans = "No";
    }

    cout << ans << endl;
    return (0);
}