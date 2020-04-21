/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 22:26:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/21 22:35:25 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// 1 2
// 3 4
// 5 6
// 7 8
// 9 10

int main(void)
{
    int n;
    cin >> n;

    int last_digit = n % 10;
    int ans;
    if (last_digit % 2 == 0)
    {
        ans = n - 1;
    }
    else
    {
        ans = n + 1;
    }
    cout << ans << endl;
    return (0);
}