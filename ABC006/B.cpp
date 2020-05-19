/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:02:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/19 15:12:55 by kkamashi         ###   ########.fr       */
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

    vector<ll> seq(N);
    seq[0] = 0;
    seq[1] = 0;
    seq[2] = 1;

    int div = 10007;
    for (int i = 3; i < N; i++)
    {
        seq[i] = seq[i - 3] + seq[i - 2] + seq[i - 1];
        seq[i] %= div;
    }
    ll ans = seq[N - 1];
    cout << ans << endl;
    return (0);
}