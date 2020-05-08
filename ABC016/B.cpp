/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 00:46:25 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/09 00:51:43 by kkamashi         ###   ########.fr       */
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
    int a, b, c;
    cin >> a >> b >> c;

    string ans;
    if (a + b == c && a - b == c)
    {
        ans = "?";
    }
    else if (a + b == c && a - b != c)
    {
        ans = "+";
    }
    else if (a + b != c && a - b == c)
    {
        ans = "-";
    }
    else
    {
        ans = "!";
    }

    cout << ans << endl;
    return (0);
}