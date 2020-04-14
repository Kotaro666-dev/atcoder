/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 12:10:41 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/14 12:52:25 by kkamashi         ###   ########.fr       */
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
    ll A, B, C;

    cin >> A >> B >> C;

    ll ans = A;
    ans %= (INF + 7);
    ans *= B;
    ans %= (INF + 7);
    ans *= C;
    ans %= (INF + 7);

    cout << ans << endl;
    return (0);
}