/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 16:55:15 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/18 17:39:04 by kkamashi         ###   ########.fr       */
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
    ll N, M;
    cin >> N >> M;

    ll ans;
    if (N == 1 && M == 1)
    {
        ans = 1;
    }
    else if (N >= 2 && M >= 2)
    {
        ans = (N - 2) * (M - 2);
    }
    else if (N >= 2)
    {
        ans = N - 2;
    }
    else if (M >= 2)
    {
        ans = M - 2;
    }
    cout << ans << endl;
}

// int main(void)
// {
//     ll N, M;
//     cin >> N >> M;

//     ll total = N * M;
//     ll ans;
//     if (N == M)
//     {
//         ans = 0;
//     }
//     else
//     {
//         ans = (N - 2) * (M - 2);
//     }
//     if (ans < 0)
//     {
//         ans *= -1;
//     }
//     cout << ans << endl;
//     return (0);
// }