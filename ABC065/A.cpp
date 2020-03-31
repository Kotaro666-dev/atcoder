/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 12:06:54 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/31 12:19:39 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int X, A, B;
    cin >> X >> A >> B;

    string ans;
    if (B <= A)
    {
        ans = "delicious";
    }
    else if (B - A < X + 1)
    {
        ans = "safe";
    }
    else
    {
        ans = "dangerous";
    }
    cout << ans << endl;
    return (0);
}