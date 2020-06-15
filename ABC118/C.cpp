/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 11:09:45 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/15 11:41:23 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REFRENCE: https://drken1215.hatenablog.com/entry/2019/02/16/224200
// 整数の足し引きを繰り返す局面では、最大公約数(gcd)に関する性質を疑うといい

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
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    ll ans = A[0];
    for (int i = 0; i < N; i++)
    {
        ans = gcd(ans, A[i]);
    }
    cout << ans << endl;
    return (0);
}