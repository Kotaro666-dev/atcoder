/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:32:48 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/21 21:03:46 by kkamashi         ###   ########.fr       */
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
    int N, K;
    cin >> N >> K;

    vector<int> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    ll ans = 0;
    int index = 0;
    while (K > 0)
    {
        ans += p[index];
        index++;
        K--;
    }

    cout << ans << endl;
    return (0);
}