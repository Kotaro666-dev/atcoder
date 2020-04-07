/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 14:11:03 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/07 14:23:30 by kkamashi         ###   ########.fr       */
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
    ll a, b, x;
    cin >> a >> b >> x;

    ll sum = (b / x) - (a / x);
    if (a % x == 0)
    {
        sum++;
    }
    cout << sum << endl;
    return (0);
}

// int main(void)
// {
//     ll a, b, x;
//     cin >> a >> b >> x;

//     ll i = 0;
//     ll counter = 0;
//     for (i = a; i <= b; i++)
//     {
//         if (i % x == 0)
//         {
//             counter++;
//         }
//     }
//     cout << counter << endl;
//     return (0);
// }