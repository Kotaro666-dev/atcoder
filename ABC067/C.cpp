/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 13:19:30 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/15 13:50:45 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    vector<ll> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(N);
    b = a;
    reverse(b.begin(), b.end());

    vector<ll> rui1(N + 1, 0);
    vector<ll> rui2(N + 1, 0);
    for (int i = 0; i < N; ++i)
    {
        rui1[i + 1] = rui1[i] + a[i];
    }
    for (int i = 0; i < N; ++i)
    {
        rui2[i + 1] = rui2[i] + b[i];
    }

    ll diff = LINF;
    ll ans = LINF;
    for (int i = 1; i < N; i++)
    {
        ll num1 = rui1[i];
        ll num2 = rui2[N - i];
        // printf("%d - %d\n", num1, num2);
        diff = abs(num1 - num2);
        ans = min(ans, diff);
    }
    cout << ans << "\n";
    return (0);
}