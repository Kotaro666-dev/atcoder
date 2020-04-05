/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 19:35:10 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/05 20:06:18 by kotaro666        ###   ########.fr       */
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
    int K, S;
    cin >> K >> S;

    int X, Y, Z;
    int ans = 0;
    for (X = 0; X <= K; X++)
    {
        for (Y = 0; Y <= K; Y++)
        {
            Z = S - X - Y;
            if (Z >= 0 && Z <= K && X + Y + Z == S)
            {
                // printf("%d %d %d\n", X, Y, Z);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return (0);
}