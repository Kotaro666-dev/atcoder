/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 09:46:54 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/03 09:37:51 by kkamashi         ###   ########.fr       */
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
    ll X;
    cin >> X;

    ll ans = sqrt(sqrt(X));
    // for (int i = 1; i <= 177; i++)
    // {
    //     if (i * i * i * i == X)
    //     {
    //         ans = i;
    //         break;
    //     }
    // }
    cout << ans << endl;
    return (0);
}