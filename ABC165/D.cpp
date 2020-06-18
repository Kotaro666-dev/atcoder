/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:37:28 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/18 10:06:56 by kkamashi         ###   ########.fr       */
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
    ll A, B, N;
    cin >> A >> B >> N;

    ll X = min(N, B - 1);
    ll ans = floor((A * X) / B) - A * floor(X / B);
    // ll ans2 = floor((A * N) / B) - A * floor(N / B);

    // for (int x = 1; x <= N; x++)
    // {
    //     ans = floor((A * x) / B) - A * floor(x / B);
    //     printf("x = %d, ans = %d\n", x, ans);
    // }
    cout << ans << endl;
    return (0);
}