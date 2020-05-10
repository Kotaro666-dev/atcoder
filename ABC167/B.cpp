/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:48:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/10 21:13:57 by kkamashi         ###   ########.fr       */
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
    ll A, B, C, K;
    cin >> A >> B >> C >> K;

    ll sum = 0;
    while (A > 0 && K > 0)
    {
        sum++;
        K--;
        A--;
    }
    while (B > 0 && K > 0)
    {
        K--;
        B--;
    }
    while (K > 0 && C > 0)
    {
        sum--;
        K--;
        C--;
    }
    cout << sum << endl;
    return (0);
}