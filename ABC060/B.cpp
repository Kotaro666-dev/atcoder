/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 10:55:35 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/02 11:13:34 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    ll A, B, C;
    cin >> A >> B >> C;

    // 例外処理
    if (A % 2 == 0 && B % 2 == 0 && C % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    ll temp = A;
    for (ll i = 2;; i++)
    {
        A = temp * i;
        if (A > INF)
        {
            cout << "NO" << endl;
            break;
        }
        else if (A % B == C)
        {
            // printf("%d %d = %d\n", i, B, C);
            cout << "YES" << endl;
            break;
        }
    }
    // cout << "No" << endl;
    return (0);
}