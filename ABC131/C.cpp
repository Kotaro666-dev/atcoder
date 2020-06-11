/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 11:43:30 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/11 15:05:27 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REFERENCE: https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11151536671

// 1からNまでの整数のうち、Kの倍数の個数は N / K個で求まる

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

int main(void)
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    A--;

    ll gcd_num = gcd(C, D);
    // printf("gcd = %d\n", gcd_num);

    // from 1 to A
    ll toAbyC = A / C;
    ll toAbyD = A / D;
    ll toAbyCD = A / ((C * D) / gcd_num);

    ll totalA = toAbyC + toAbyD - toAbyCD;
    //from 1 to B
    ll toBbyC = B / C;
    ll toBbyD = B / D;
    ll toBbyCD = B / ((C * D) / gcd_num);

    ll totalB = toBbyC + toBbyD - toBbyCD;

    // from A to B
    ll AB = totalB - totalA;
    ll ans = (B - A) - AB;

    cout << ans << "\n";
    return (0);
}