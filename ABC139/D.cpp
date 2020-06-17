/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:26:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/17 16:30:36 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 数学ゲーム

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
    ll ans = (N * (N - 1)) / 2;
    cout << ans << endl;
    return (0);
}