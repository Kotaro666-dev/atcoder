/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:32:54 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/30 14:40:01 by kotaro666        ###   ########.fr       */
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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int minimum = max(A, C);
    int maximum = min(B, D);
    int ans = maximum - minimum;
    if (ans < 0)
    {
        ans = 0;
    }
    cout << ans << endl;
    return (0);
}