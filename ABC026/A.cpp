/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:48:29 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/29 17:52:36 by kkamashi         ###   ########.fr       */
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
    int A;
    cin >> A;

    int ans;
    if (A % 2 == 0)
    {
        ans = (A / 2) * (A / 2);
    }
    else
    {
        ans = (A / 2) * (A / 2 + 1);
    }
    cout << ans << endl;
    return (0);
}