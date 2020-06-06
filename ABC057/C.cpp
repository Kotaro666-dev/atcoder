/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 20:31:26 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 20:43:58 by kkamashi         ###   ########.fr       */
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
    ll N;
    cin >> N;

    ll a, b;
    ll mx;
    int temp;
    int ans = INF;
    for (a = 1; a * a <= N; a++)
    {
        if (N % a == 0)
        {
            b = N / a;
            mx = max(a, b);
            temp = to_string(mx).length();
            ans = min(ans, temp);
        }
    }
    cout << ans << endl;
    return (0);
}