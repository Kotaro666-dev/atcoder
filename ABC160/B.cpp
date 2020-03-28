/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 16:11:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/28 21:07:20 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int X;
    cin >> X;

    ll ans = 0;
    while (X >= 500)
    {
        X -= 500;
        ans += 1000;
    }
    // printf("%d\n", X);
    while (X >= 5)
    {
        X -= 5;
        ans += 5;
    }
    cout << ans << endl;
    return (0);
}